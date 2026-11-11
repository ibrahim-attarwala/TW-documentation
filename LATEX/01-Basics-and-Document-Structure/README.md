# Phase 1: Basics and Document Structure & Basic Formatting

This module covers the fundamentals of LaTeX document preparation, toolchain setups, document classes, text formatting, and foundational page layouts.

## Files

- `basic_document.tex` – Basic document structure, title, author, date, abstract, and sections.
- `text_formatting.tex` – Text formatting, font sizes, special character escaping, text alignment, lists, and manual breaks.

## Concepts Covered

* **Introduction to LaTeX & Toolchains**
  * LaTeX is a document preparation system based on the TeX typesetting system.
  * Advantages include being portable, free, offering professional layouts, and supporting convenient math typesetting.
  * Unlike MS Word, LaTeX effort and time consumption scale much more predictably as document complexity increases.
  * Offline editing tools include MiKTeX, TeXstudio, and TeX Live, while online platforms include Overleaf.
  * Source files use the `.tex` extension and compile into PDF, DVI, PS, or RTF outputs.
  * Standard compilation is executed via `pdflatex` or traditional multi-step `latex` and `bibtex` workflows.

* **Document Skeleton, Classes & Metadata**
  * Every document requires three foundational components: `\documentclass`, `\begin{document}`, and `\end{document}`.
  * Available document classes include `article`, `report`, `book`, `letter`, `beamer`, and `exam`.
  * Document titles, authors, and dates are defined using `\title`, `\author`, and `\date`, and rendered via `\maketitle`.
  * Abstracts are created using the `abstract` environment, and content is organized using hierarchical section commands.

* **Text Formatting, Special Characters & Page Styles**
  * Reserved special characters must be escaped with a backslash to be printed.
  * Comments are created using the `%` character, causing LaTeX to ignore the rest of the line.
  * Font sizes range from `\tiny` to `\Huge`, and text alignment is managed via custom environments.
  * Page styles (`plain`, `headings`, `empty`) control headers and footers.
  * Lists (`itemize`, `enumerate`, `description`), manual line breaks (`\\`), and page breaks (`\newpage`) handle structural flow.

## Compilation

Both files can be compiled using offline environments (such as MiKTeX, TeX Live, or TeXstudio) or online platforms (such as Overleaf).