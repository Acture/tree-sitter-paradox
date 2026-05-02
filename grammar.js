/**
 * @file Paradox grammar for tree-sitter
 * @author acture <acturea@gmail.com>
 * @license AGPL
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const RESERVED_CONDITION_KEYWORDS = ["if", "else_if", "else", "limit", "trigger", "potential", "allow"];
const LOGICAL_KEYWORDS = ["AND", "OR", "NOT"];

module.exports = grammar({
	name: "paradox",
	fileTypes: ["mod", "txt", "asset", "gui"],
	word: $ => $.identifier,

	extras: $ => [
		/\s/,
		$.comment,
	],

	conflicts: $ => [
		[$.map, $.array],
		[$.assignment, $.variable_embedded_identifier],
		[$.simple_value, $.variable_embedded_identifier],
		[$.variable_embedded_identifier],
		[$.assignment, $.statement],
		[$.variable_embedded_identifier, $.statement],
		[$.array, $.statement],
		[$.array, $.statement, $.variable_embedded_identifier],
		[$.array, $.variable_embedded_identifier],
		[$.assignment, $.simple_value],
	],

	rules: {
		source_file: $ => repeat(field("top_level_statement", $.statement)),

		assignment: $ => seq(
			field("key", choice(
				$.identifier,
				$.number,
				$.variable,
				$.variable_embedded_identifier,
				$.template_string,
				$.string,
			)),
			"=",
			field("value", choice($.simple_value, $.array, $.map, $.variable, $.variable_embedded_identifier)),
		),

		map: $ => seq("{", repeat($.statement), "}"),

		statement: $ => choice(
			$.macro_map,
			$.condition_statement,
			$.logical_statement,
			$.scope_statement,
			$.assignment,
			$.variable,
			$.variable_embedded_identifier,
			$.simple_value,
		),

		array: $ => seq("{", repeat(choice($.simple_value, $.variable, $.variable_embedded_identifier)), "}"),

		simple_value: $ => choice($.string, $.number, $.boolean, $.identifier),

		condition_statement: $ => seq(
			field("keyword", $.condition_keyword),
			"=",
			field("body", $.map),
		),

		logical_statement: $ => seq(
			field("keyword", $.logical_keyword),
			"=",
			field("body", $.map),
		),

		scope_statement: $ => seq(
			field("keyword", $.scope_keyword),
			"=",
			field("body", $.map),
		),

		condition_keyword: _ => choice(...RESERVED_CONDITION_KEYWORDS),
		logical_keyword: _ => choice(...LOGICAL_KEYWORDS),

		scope_keyword: _ => token(choice(
			"THIS",
			"ROOT",
			/FROM(?:FROM){0,4}/,
			/PREV(?:PREV){0,4}/,
		)),

		macro_map: $ => seq(
			"[[",
			field("key", $.identifier),
			"]",
			repeat($.statement),
			"]",
		),

		template_string: _ => token(seq('"', /[^"#\\]*/, "#", /[0-9]+/, /[^"\\]*/, '"')),
		string: _ => token(seq('"', repeat(choice(/[^"\\]/, /\\./)), '"')),
		number: _ => /-?(?:\d+\.\d+|\d+|\.\d+)(?:[eE][+-]?\d+)?/,
		boolean: _ => choice("yes", "no", "true", "false"),
		variable: $ => seq("$", $.identifier, "$"),
		identifier: _ => token(prec(-1, /[^\s"={}\[\]#$][^\s"={}\[\]#$]*/)),

		variable_embedded_identifier: $ => choice(
			seq(choice($.number, $.identifier), $.variable),
			seq($.variable, choice($.number, $.identifier)),
			seq(choice($.number, $.identifier), $.variable, choice($.number, $.identifier)),
		),

		comment: $ => choice(
			$._dash_block_comment,
			$._dash_line_comment,
			$._hash_comment,
		),
		_hash_comment: _ => token(seq("#", /.*/)),
		_dash_line_comment: _ => token(seq("--", /[^\n\r]*/)),
		// TODO: Lua block comments only support level 0 (--[[ ]]); higher
		// levels (--[=[ ]=] etc) require an external scanner.
		_dash_block_comment: _ => token(prec(1, seq(
			"--[[",
			repeat(choice(/[^\]]/, /\][^\]]/)),
			"]]",
		))),
	},
});
