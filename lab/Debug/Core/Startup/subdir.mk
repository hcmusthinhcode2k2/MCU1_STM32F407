{
	"information_for_contributors": [
		"This file has been converted from https://github.com/textmate/html.tmbundle/blob/master/Syntaxes/HTML%20%28Derivative%29.tmLanguage",
		"If you want to provide a fix or improvement, please create a pull request against the original repository.",
		"Once accepted there, we are happy to receive an update request."
	],
	"version": "https://github.com/textmate/html.tmbundle/commit/390c8870273a2ae80244dae6db6ba064a802f407",
	"name": "HTML (Derivative)",
	"scopeName": "text.html.derivative",
	"injections": {
		"R:text.html - (comment.block, text.html meta.embedded, meta.tag.*.*.html, meta.tag.*.*.*.html, meta.tag.*.*.*.*.html)": {
			"comment": "Uses R: to ensure this matches after any other injections.",
			"patterns": [
				{
					"match": "<",
					"name": "invalid.illegal.bad-angle-bracket.html"
				}
			]
		}
	},
	"patterns": [
		{
			"include": "text.html.basic#core-minus-invalid"
		},
		{
			"begin": "(</?)(\\w[^\\s>]*)(?<!/)",
			"beginCaptures": {
