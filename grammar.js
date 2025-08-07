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
	],

	rules: {
		source_file: $ => repeat(field("top_level_statement", $.statement)),

		// top_level_statement: $ => choice(field("top_level_statement", $.statement), field("top_level_block", $.block)),

		assignment: $ => seq(
			field("key", choice($.identifier, $.number, $.variable)),
			"=",
			field("value", choice($.simple_value, $.array, $.map, $.variable))
		),

		map: $ => seq("{", repeat(choice($.statement)), "}"),

		// block: $ => seq("{", repeat($.statement), "}"),

		statement: $ => choice(
			$.macro_map,

			$.assignment,
			$.condition_statement,
			$.logical_statement,
		),


		array: $ => seq("{", repeat($.simple_value), "}"),

		simple_value: $ => choice($.string, $.number, $.boolean, $.identifier,),

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
		string: $ => /"(?:[^"\\]|\\.)*"/,
		number: $ => /-?(?:\d+\.\d+|\d+|\.\d+)(?:[eE][+-]?\d+)?/,
		boolean: $ => choice("yes", "no", "true", "false"),
		variable: $ => seq("$", $.identifier, "$"),
		identifier: $ => /[^\s"={}\[\]#$]+/,
		comment: $ => token(seq("#", /.*/)),
	}
});