import XCTest
import SwiftTreeSitter
import TreeSitterMermaid

final class TreeSitterMermaidTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mermaid())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mermaid.js grammar for tree-sitter grammar")
    }
}
