/**
 * @file Paradox grammar for tree-sitter
 * @author acture <acturea@gmail.com>
 * @license AGPL
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: "paradox",

	extras: $ => [
		/\s/,        // 空格、tab、换行（包括 \n）
		$.comment,   // 注释
	],
	conflicts: $ => [
	],

	rules: {
		source_file: $ => repeat($.statement),

		statement: $ => choice($.assignment, $.block),

		assignment: $ => seq($.key, "=", $.value),

		block: $ => seq($.key, "=", "{", repeat($.statement), "}"),


		value: $ => choice(
			$.array,
			$.simple_value
		),

		array: $ => seq("{", repeat1($.value), "}"),

		key: $ => /[A-Za-z_][A-Za-z0-9_:.@!$%<>-]*/,  // mod 中允许相当多的字符

		simple_value: $ => choice(
			$.string,
			$.boolean,
			$.number,
			$.literal
		),
		literal: $ => /[A-Za-z0-9_:.@!$%<>-]+/,

		string: $ => /"(?:[^"\\]|\\.)*"/,

		number: $ => token(
			/-?(?:\d+\.\d+|\d+|\.\d+)(?:[eE][+-]?\d+)?/
		),

		boolean: $ => choice("yes", "no", "true", "false"),

		comment: $ => token(seq("#", /.*/)),
	}
});