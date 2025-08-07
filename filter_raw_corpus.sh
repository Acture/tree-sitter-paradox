#!/bin/sh

success=0
failure=0

for file in $(find ./test/raw_corpus -name '*.txt'); do
    if tree-sitter parse "$file" > /dev/null 2>&1; then
        echo "✅ Success: $file"
        success=$((success + 1))
        rm "$file"
    else
        echo "❌ Failed:  $file"
        failure=$((failure + 1))
    fi
done

echo ""
echo "=== Summary ==="
echo "✅ Successful parses: $success"
echo "❌ Failed parses:    $failure"
