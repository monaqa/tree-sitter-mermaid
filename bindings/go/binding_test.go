package tree_sitter_mermaid_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-mermaid"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mermaid.Language())
	if language == nil {
		t.Errorf("Error loading Mermaid grammar")
	}
}
