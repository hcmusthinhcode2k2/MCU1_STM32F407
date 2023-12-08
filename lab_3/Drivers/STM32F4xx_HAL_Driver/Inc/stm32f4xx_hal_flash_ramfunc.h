{
  "name": "julia",
  "version": "1.0.0",
  "description": "%description%",
  "license": "MIT",
  "contributes": {
    "languages": [
      {
        "id": "julia",
        "aliases": [
          "Julia",
          "julia"
        ],
        "extensions": [
          ".jl"
        ],
        "firstLine": "^#!\\s*/.*\\bjulia[0-9.-]*\\b",
        "configuration": "./language-configuration.json"
      },
      {
        "id": "juliamarkdown",
        "aliases": [
          "Julia Markdown",
          "juliamarkdown"
        ],
        "extensions": [
          ".jmd"
        ]
      }
    ],
    "grammars": [
      {
        "language": "julia",
        "scopeName": "source.julia",
        "path": "./syntaxes/julia.tmLanguage.json",
        "embeddedLanguages": {
          "meta.embedded.inline.cpp": "cpp",
          "meta.embedded.inline.javascript": "javascript",
          "meta.embedded.inline.python": "python",
          "meta.embedded.inline.r": "r",
          "meta.embedded.inline.sql": "sql"
        }
      }
    ]
  }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   