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
	], conflicts: $ => [[$.map, $.block],[$.array, $.map]],

	rules: {
		source_file: $ => repeat(field("top_level_statement", $.top_level_statement)),

		top_level_statement: $ => choice(field("top_level_statement", $.statement), field("top_level_block", $.block)),

		assignment: $ => seq(field("key", $.key), "=", field("value", $.value)),

		key: $ => choice($.identifier, $.number),

		value: $ => choice($.simple_value, $.array, $.map),

		map: $ => seq("{", repeat(choice($.statement)), "}"),


		block: $ => seq("{", repeat($.statement), "}"),

		statement: $ => choice(
			$.assignment,
			$.keyword_statement,
		),


		array: $ => seq("{", repeat($.simple_value), "}"),

		simple_value: $ => choice($.string, $.number, $.boolean, $.identifier,),

		keyword_statement: $ => choice(
			$.keyword, "=", $.map
		),

		keyword: $ => choice(
			"effect",
			"if",
			"limit",
			"trigger",
			"modifier",
			"potential",
			$.logical_operator
		),


		logical_operator: $ => choice("AND", "OR", "NOR", "NOT"),


		string: $ => /"(?:[^"\\]|\\.)*"/,
		number: $ => token(/-?(?:\d+\.\d+|\d+|\.\d+)(?:[eE][+-]?\d+)?/),
		boolean: $ => choice("yes", "no", "true", "false"),
		identifier: $ => /[A-Za-z0-9_:.@!$%<>-]+/,

		comment: $ => token(seq("#", /.*/)),
	}
});