#!/bin/sh

success_file="$(mktemp)"
failure_file="$(mktemp)"
: > "$success_file"
: > "$failure_file"

find test/raw_corpus -type f -name '*.txt' -print0 |
while IFS= read -r -d '' file; do
    if tree-sitter parse "$file" > /dev/null 2>&1; then
        echo "✅ Success: $file"
        rm "$file"
        echo . >> "$success_file"
    else
        echo "❌ Failed:  $file"
        echo . >> "$failure_file"
    fi
done

success=$(wc -l < "$success_file")
failure=$(wc -l < "$failure_file")

rm -f "$success_file" "$failure_file"

echo ""
echo "=== Summary ==="
echo "✅ Successful parses: $success"
echo "❌ Failed parses:    $failure"