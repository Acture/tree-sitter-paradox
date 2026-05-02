# tree-sitter-paradox

Tree-sitter grammar for Paradox grand-strategy configuration and scripting files, including Europa Universalis IV, Crusader Kings, and Hearts of Iron. It ships the grammar, highlight queries, generated parser, and bindings for the ecosystems editors and tools use most often.

## Features

- Incremental parsing via Tree-sitter
- Highlight queries for editor integrations (`queries/*.scm`)
- Bindings for Node.js, Python, Rust, Swift, and C
- Corpus tests that lock grammar behavior (`test/corpus`)
- Comment support for `#`, Lua `--` line comments, and level-0 `--[[ ... ]]` block comments

The Lua-style comments keep this grammar aligned with Foch's hand-written parser, which uses the same conventions for EU4 `common/defines/*.lua` files.

## Repository layout

| Path | Purpose |
| --- | --- |
| `grammar.js` | Tree-sitter grammar specification and source of truth |
| `src/` | generated C parser sources that ship to consumers |
| `queries/` | highlighting and other Tree-sitter queries |
| `test/corpus` | Tree-sitter CLI corpus fixtures |
| `bindings/` | bindings and packaging for Node, Python, Rust, Swift, and C |
| `tree-sitter.json` | grammar metadata |

## Prerequisites

- C/C++ toolchain for native builds
- Node.js for the Node binding and tests
- Python 3.10+ for the Python binding and tests
- Rust, optional, for crate builds
- Bun, optional, for `bunx tree-sitter generate`
- Tree-sitter CLI, optional, for grammar development and corpus tests
  - Install with `npm i -g tree-sitter-cli`, or use the devDependency via `npx tree-sitter`

## Quick start

### Node.js

Install dependencies; this builds the native addon:

```sh
npm install
```

Parse Paradox code:

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

Add the crate in your `Cargo.toml` when consuming it from crates.io, or use a path dependency from this repository:

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-paradox = "0.2"
```

Example usage:

```rust
use tree_sitter::{Language, Parser};
use tree_sitter_paradox as paradox;

fn main() {
    let mut parser = Parser::new();
    parser.set_language(&Language::from(paradox::language())).unwrap();
    let source = "country_event = { id = 42 }";
    let tree = parser.parse(source, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

Build the crate in this repository:

```sh
cargo build
```

## Developing the grammar

Common tasks:

- Run corpus tests with the Tree-sitter CLI:
  ```sh
  npx tree-sitter test
  # or
  make test
  ```

- Rebuild the native addon for Node:
  ```sh
  npm install
  ```

- Build WASM for the playground, optional:
  ```sh
  npm run prestart
  ```

- Build the C library, optional:
  ```sh
  make
  ```

- Regenerate `src/parser.c` after grammar changes:
  ```sh
  bunx tree-sitter generate
  ```

Run parser regeneration on Linux, macOS, or WSL. Windows `node-gyp` tooling remains unstable, so the Makefile's "Windows is not supported" line is accurate for grammar developers. Rust consumers of the published crate are unaffected because the regenerated `src/parser.c` ships with the crate.

When changing `grammar.js`:

- Keep changes minimal and add or adjust fixtures in `test/corpus` to cover new syntax or bug fixes.
- Update `queries/*.scm` when node types or structure changes affect highlighting.

## Release automation

This repository uses the official `tree-sitter/workflows` reusable workflows for release assets and npm publication. Crates and PyPI are published separately with trusted publishing, so no long-lived registry tokens need to live in GitHub secrets.

Release flow:

1. Update the version consistently in `tree-sitter.json`, `package.json`, `Cargo.toml`, and `pyproject.toml`.
2. Merge that change to `master`.
3. The `Version tag` workflow verifies that the four versions match, creates the annotated tag `vX.Y.Z`, and pushes it.
4. The tag triggers:
   - `Create release` via `tree-sitter/workflows`
   - npm publication via `tree-sitter/workflows`
   - PyPI wheel and sdist builds in `.github/workflows/package.yml`
   - PyPI publication via trusted publishing in `.github/workflows/package.yml`
   - crates.io publication via trusted publishing in `.github/workflows/package.yml`

If you need a manual recovery path, rerun `Version tag` after fixing the version files, or rerun the existing tag-triggered publish job in GitHub Actions. Publishing itself is intentionally restricted to `v*` tag pushes.

Repository configuration required:

- GitHub secret `NPM_TOKEN` for npm publication
- A crates.io trusted publisher configured for this repository with workflow file `package.yml` and environment `release`
- A PyPI trusted publisher configured for this repository with workflow file `package.yml` and environment `pypi`

The first crates.io release still has to be published manually before trusted publishing can be enabled on crates.io.

## Supported editors

Any editor integrating Tree-sitter can load this grammar. For Neovim or Helix, use a plugin that sources the parser and `queries/highlights.scm`, or configure the editor to find the generated library.

## License

AGPL-3.0-only. See LICENSE for details.

## Acknowledgments

- Built on Tree-sitter.
- Inspired by community grammars and Paradox modding documentation.