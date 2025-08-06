import XCTest
import SwiftTreeSitter
import TreeSitterParadox

final class TreeSitterParadoxTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_paradox())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Paradox grammar")
    }
}
