# Tables, Figures, Colors & Vector Graphics

This module covers organizing structured data into tables, incorporating external images with styling and colors, and drawing native vector graphics in LaTeX.

## Files

- `tables_and_formatting.tex` – Custom tables with alignment specifiers, merged cells, positioning, captions, referencing, and cell/row coloring.
- `figures_colors_and_drawings.tex` – Image inclusion, scaling, rotation, cropping, side-by-side minipage layouts, custom color definitions, and native picture vector drawings.

## Concepts Covered

* **Tables & Grid Layouts**
  * Build tables using the `tabular` environment with column alignment specifiers (`l`, `c`, `r`, and fixed-width `p{width}`) and grid borders (`\hline`).
  * Merge table rows and columns using `\multicolumn` and `\multirow`.
  * Control float positioning, add captions, and cross-reference elements using labels and references.
  * Apply custom column widths, row heights, border thickness, and cell/row coloring using `colortbl` and `xcolor`.

* **Figures, Images & Colors**
  * Load the `graphicx` package to insert, scale, rotate, and crop images using `\includegraphics`.
  * Manage image floats with captions and arrange side-by-side images using `minipage` layouts.
  * Apply text colors, background highlights, and custom color definitions using the `xcolor` package (`\textcolor`, `\colorbox`, `\definecolor`).

* **Native Vector Drawing**
  * Use the `picture` environment with `\unitlength` settings to draw lines, directional vectors, circles, ovals, and framed boxes.
  * Implement dashed boxes, short text stacks, quadratic Bézier curves (`\qbezier`), and repeated patterns (`\multiput`).

## Compilation

Both files can be compiled using offline environments or online platforms.