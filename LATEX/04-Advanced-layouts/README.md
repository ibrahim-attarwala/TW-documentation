# Advanced Layouts, Debugging & Bibliographies

This module covers custom styling packages, complex box manipulation, compilation error troubleshooting, index generation, and literature bibliography management in LaTeX.

## Files

- `advanced_layouts_boxes.tex` – Custom page geometry, global font styling, advanced headers and footers, bullet customization, and horizontal/vertical box constructions.
- `debugging_indices_bibliographies.tex` – Error log interpretation, debugging strategies, subject index creation using makeidx, and reference management via BibTeX.

## Concepts Covered

* **Advanced Layouts & Customization**
  * Customize global section fonts using the `sectsty` package (`\sectionfont`).
  * Configure advanced headers and footers using the `fancyhdr` package (`\fancyhf`, `\fancyhead`, `\fancyfoot`, `\thepage`).
  * Set custom page margins using the `geometry` package and control list formatting using `enumitem`.
  * Create fixed-width, framed, and saved boxes (`\makebox`, `\framebox`, `\parbox`, `\rule`, `\raisebox`, `\savebox`) alongside unlabeled custom environments (`trivlist`).

* **Debugging & Troubleshooting**
  * Read compiler log files, interpret error locators, and resolve common syntax errors such as mismatched table columns or unclosed environments.
  * Follow systematic debugging strategies like minimal document reduction, commenting out code blocks, and incremental compilation.

* **Indices & Bibliographies**
  * Create subject indexes using the `makeidx` package (`\makeindex`, `\index`, `\printindex`) and compile using the `latex` $\rightarrow$ `makeindex` $\rightarrow$ `latex` workflow.
  * Manage literature citations via BibTeX (`.bib` files, entry types like `@book` and `@article`, `\bibliography`, `\bibliographystyle`, `\cite`) using the multi-step `latex` $\rightarrow$ `bibtex` $\rightarrow$ `latex` $\rightarrow$ `latex` pipeline.

## Compilation

These files can be compiled using offline environments or online platforms, noting that index and bibliography files require multiple compilation passes.