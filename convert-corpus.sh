#!/usr/bin/env bash

set -euo pipefail

OUT_DIR="test/corpus"
mkdir -p "$OUT_DIR"

for file in "$@"; do
    if [[ ! -f "$file" ]]; then
        echo "❌ Not a file: $file"
        continue
    fi

    base=$(basename "$file")
    name="${base%.*}"
    out_file="$OUT_DIR/$name.txt"

    {
        echo "================================================================================"
        echo "$name"
        echo "================================================================================"
        cat "$file"
        printf "\n"
        echo "--------------------------------------------------------------------------------"
    } > "$out_file"

    rm "$file"

    echo "✅ Converted: $file -> $out_file"

    tree-sitter test -u
done