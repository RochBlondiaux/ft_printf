<h1 align="center">
	 ft_printf
</h1>

<p align="center">
	<b><i>Development repo for 42cursus' ft_printf project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/rochblondiaux/42cursus"><b>42cursus repo</b></a>.
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/rochblondiaux/ft_printf?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/rochblondiaux/ft_printf?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/rochblondiaux/ft_printf?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/rochblondiaux/ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/rochblondiaux/ft_printf?color=brightgreen" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 🗣️ About

> This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future project without the fear of being flagged as a cheater. You will mainly learn how to use variadic arguments.

For detailed information, refer to the [**subject of this project**](https://github.com/RochBlondiaux/ft_printf/blob/main/fr.subject.pdf).

	🚀 TLDR: TLDR: this project consists of coding a library that contains a simplified version (more information below) of the printf function.

## 📑 Index

`@root`

* [**📁 printer:**](printer/) contains all printer functions.
* [**📁 utils:**](utils/) contains all utilities functions.
* [**📑 utils:**](ft_printf.c) contains the main function.
* [**📑 utils:**](ft_printf.h) contains all prototypes and libraries includes.

**Functions in `ft_printf.c`**

* `ft_printf` Initialization function: start/end variadic arguments functions `<stdarg.h>`; in between that, goes through the input string printing and send collected arguments the `ft_printer` function.


`@/printer/`


* `ft_print_char` - print characters.
* `ft_print_int` - print numbers.
* `ft_print_large_hexa` - print uppercase hexadecimal.
* `ft_print_small_hexa` - print lowercase hexadecimal.
* `ft_print_str` - print strings.
* `ft_print_unsigned` - print unsigned integers.
* `ft_print_pointer` - print pointers addresses.
* `ft_printf` - act exactly like a switch (actual switches are forbidden)

`@/utils/`

* `ft_putchar` - write a char to the standard output stream.
* `ft_putnbr` - write numbers to the standard output stream.
* `ft_putnbr_base` - write hexadecimal integers to the standard output stream.
* `ft_putstr` - write strings to the standard output stream.

## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/ft_printf && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "ft_printf.h"
```

and, when compiling your code, add the required flags:

```shell
-lftprintf -L path/to/libftprintf.a -I path/to/ft_printf.h
```

## 📋 Testing

* [Tripouille/printfTester](https://github.com/Tripouille/printfTester)
