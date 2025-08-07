#!/usr/bin/env bash
set -euo pipefail

for SRC in "$@"; do
  # 自动检测编码
  encoding=$(file -bi "$SRC" | sed -E 's/.*charset=//')

  if [[ "$encoding" == "utf-8" || "$encoding" == "us-ascii" ]]; then
    echo "✅ Already UTF-8: $SRC"
  else
    TMP=$(mktemp)
    if iconv -f "$encoding" -t utf-8 "$SRC" -o "$TMP" 2>/dev/null; then
      mv "$TMP" "$SRC"
      echo "🔁 Converted ($encoding → UTF-8): $SRC"
    else
      echo "❌ Failed to convert: $SRC (encoding: $encoding)"
      rm -f "$TMP"
    fi
  fi
done
