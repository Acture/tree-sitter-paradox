/**
 * @file Paradox grammar for tree-sitter
 * @author acture <acturea@gmail.com>
 * @license AGPL
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: "paradox", fileTypes: ["mod", "txt", "asset", "gui"],

	extras: $ => [/\s/,        // 空格、tab、换行（包括 \n）
		$.comment,   // 注释
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

	],

	rules: {
		source_file: $ => repeat(field("top_level_statement", $.statement)),

		// top_level_statement: $ => choice(field("top_level_statement", $.statement), field("top_level_block", $.block)),

		assignment: $ => seq(
			field("key", choice($.identifier, $.number, $.variable, $.variable_embedded_identifier, $.template_string)),
			"=",
			field("value", choice($.simple_value, $.array, $.map, $.variable, $.variable_embedded_identifier))
		),

		map: $ => seq("{", repeat($.statement), "}"),

		// block: $ => seq("{", repeat($.statement), "}"),

		statement: $ => choice(
			$.macro_map,
			$.assignment,
			$.condition_statement,
			$.logical_statement,
			$.variable, $.variable_embedded_identifier,
		),


		array: $ => seq("{", repeat(choice($.simple_value, $.variable, $.variable_embedded_identifier)), "}"),

		simple_value: $ => choice($.string, $.number, $.boolean, $.identifier),

		condition_statement: $ => choice(
			"if", "=", $.map,
			"limit", "=", $.map,
			"trigger", "=", $.map,
			"potential", "=", $.map,
		),


		logical_statement: $ => choice(
			seq("AND", "=", $.map),
			seq("OR", "=", $.map),
			seq("NOT", "=", $.map),
		),

		macro_map: $ => seq(
			"[[", field("key", $.identifier), "]",
			repeat($.statement),
			"]"
		),
		template_string: $ => token(
			seq('"', /[^"#\\]*/, "#", /[0-9]+/, /[^"\\]*/, '"')
		),
		string: $ =>token(seq('"', repeat(choice(/[^"\\]/, /\\./)), '"')),
		number: $ => /-?(?:\d+\.\d+|\d+|\.\d+)(?:[eE][+-]?\d+)?/,
		boolean: $ => choice("yes", "no", "true", "false"),
		variable: $ => seq("$", $.identifier, "$"),
		identifier: $ => /[^\s"={}\[\]#$]+/,
		variable_embedded_identifier: $ =>
			choice(
				seq(
					choice($.number, $.identifier),
					$.variable,
				),
				seq(
					$.variable,
					choice($.number, $.identifier)
				),
				seq(
					choice($.number, $.identifier),
					$.variable,
					choice($.number, $.identifier)
				),
			),

		comment: $ => token(seq("#", /.*/)),
	}
});