# Doxygen Documentation

This section introduces **Doxygen**, a tool that generates documentation
from specially formatted comments written in source code.

## What Is Doxygen?

Doxygen is an open-source documentation generator used with languages
such as C, C++, Python, and Java. It can create reference documentation
in formats such as HTML, LaTeX, and PDF.

## Common Doxygen Tags

  Tag          Purpose
  ------------ --------------------------------
  `\brief`     Gives a short description
  `\param`     Describes a function parameter
  `\return`    Describes the returned value
  `\author`    Specifies the author
  `\version`   Specifies the version
  `\see`       Refers to related items
  `\note`      Adds an additional note

## Basic Workflow

1.  Add Doxygen-style comments to the source code.
2.  Generate a configuration file using `doxygen -g Doxyfile`.
3.  Run Doxygen using `doxygen Doxyfile`.
4.  Open `html/index.html` to view the generated documentation.

## Example

The file [`main.cpp`](main.cpp) contains a small C++ program with
Doxygen comments.

## Generate Documentation

After installing Doxygen, open a terminal in this folder and run:

``` bash
doxygen -g Doxyfile
doxygen Doxyfile
```

The generated HTML documentation can be viewed by opening
`html/index.html` in a browser.