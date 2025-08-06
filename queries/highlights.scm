;; -------- Comments --------
(comment) @comment

;; -------- Literals & Constants --------
(string) @string
(number) @number
(boolean) @constant.builtin
(literal) @variable

;; -------- Identifiers --------
(key) @property

;; -------- Assignment Structure --------
(assignment
  key: (key) @property
  "=" @operator
  value: (_) @variable)

;; -------- Punctuation --------
"=" @operator
"{" @punctuation.bracket
"}" @punctuation.bracket