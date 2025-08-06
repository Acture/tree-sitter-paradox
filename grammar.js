/**
 * @file Paradox grammar for tree-sitter
 * @author acture <acturea@gmail.com>
 * @license AGPL
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
	name: "paradox",

	extras: $ => [/\s|\\\r?\n/,  // whitespace + line continuation
		$.comment,],

	rules: {
		source_file: $ => repeat($.statement),

		statement: $ => choice($.assignment, $.block),

		assignment: $ => seq($.key, "=", $.value),

		block: $ => seq($.key, "=", "{", repeat($.statement), "}"),

		value: $ => choice($.string, $.number, $.boolean, $.array, $.block, $.key,     // raw identifier value
		),

		array: $ => seq("{", repeat1($.value), "}"),

		key: $ => /[A-Za-z0-9_:.@!$%<>-]+/,  // mod 中允许相当多的字符

		string: $ => /"(?:[^"\\]|\\.)*"/,

		number: $ => /-?\d+(\.\d+)?/,  // int / float

		boolean: $ => choice("yes", "no", "true", "false"),

		comment: $ => token(seq("#", /.*/)),
	}
});