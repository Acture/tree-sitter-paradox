# tree-sitter-paradox

Tree-sitter grammar for the Paradox family of games (e.g., Europa Universalis IV, Crusader Kings, Hearts of Iron) configuration and scripting files. This repository defines the grammar and ships bindings for multiple ecosystems so editors and tools can parse and highlight Paradox scripts.

## Features
- Incremental parsing via Tree-sitter
- Query files for syntax highlighting (queries/*.scm)
- Multi-language bindings: Node.js, Python, Rust, Swift, and C
- Corpus tests to validate grammar behavior (test/corpus)

## Repository layout
- grammar.js — Tree-sitter grammar specification (source of truth)
- src/ — C sources for the generated parser
- queries/ — Highlighting and other Tree-sitter queries
- test/corpus — Tree-sitter CLI corpus tests
- bindings/ — Bindings and packaging for Node, Python, Rust, Swift, C
- tree-sitter.json — Grammar metadata

## Prerequisites
- A C/C++ toolchain (for native builds)
- Node.js (for Node binding/tests)
- Python 3.10+ (for Python binding/tests)
- Rust (optional; for crate build)
- Tree-sitter CLI (optional; for developing and running corpus tests)
  - Install: `npm i -g tree-sitter-cli` or use the devDependency via `npx tree-sitter`

## Quick start

### Node.js
Install dependencies (builds the native addon):

```sh
npm install
```

Parse some Paradox code:

```js
const Parser = require('tree-sitter');
const Paradox = require('tree-sitter-paradox');

const parser = new Parser();
parser.setLanguage(Paradox);

const source = 'country_event = { id = 42 }';
const tree = parser.parse(source);
console.log(tree.rootNode.toString());
```

Run the Node tests:

```sh
npm test
```

### Python
Install the package in editable mode and run the binding test:

```sh
pip install -e .[core]
python -m unittest bindings/python/tests/test_binding.py
```

Use it from Python:

```py
from tree_sitter import Parser
import tree_sitter_paradox as tsp

parser = Parser()
parser.set_language(tsp.language())
source = b"country_event = { id = 42 }"
tree = parser.parse(source)
print(tree.root_node)
```

### Rust
Add the crate in your Cargo.toml (if using this as a dependency from crates.io; otherwise use a path dependency):

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-paradox = "0.2"
```

Example usage:

```rust
use tree_sitter::{Parser, Language};
use tree_sitter_paradox as paradox;

fn main() {
    let mut parser = Parser::new();
    parser.set_language(&Language::from(paradox::language())).unwrap();
    let source = "country_event = { id = 42 }";
    let tree = parser.parse(source, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

Build the crate in this repo:

```sh
cargo build
```

## Developing the grammar

Common tasks:

- Run corpus tests (via Tree-sitter CLI):
  ```sh
  npx tree-sitter test
  # or
  make test
  ```

- Rebuild the native addon for Node:
  ```sh
  npm install
  ```

- Build WASM for playground (optional):
  ```sh
  npm run prestart
  ```

- Build the C library (optional):
  ```sh
  make
  ```

When changing grammar.js:
- Keep changes minimal and add/adjust fixtures in test/corpus to cover new syntax or bug fixes.
- Update queries/*.scm if node types or structure affecting highlighting change.

## Supported editors
Any editor integrating Tree-sitter can load this grammar. For Neovim or Helix, use a plugin that sources the parser and the `queries/highlights.scm` file, or configure them to find the generated library.

## License
AGPL-3.0-only. See LICENSE for details.

## Acknowledgments
- Built on Tree-sitter.
- Inspired by community grammars and Paradox modding documentation.