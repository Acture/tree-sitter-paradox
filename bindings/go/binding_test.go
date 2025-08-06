package tree_sitter_paradox_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_paradox "github.com/acture/tree-sitter-paradox.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_paradox.Language())
	if language == nil {
		t.Errorf("Error loading Paradox grammar")
	}
}
