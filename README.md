<h1 align="center">
	42cursus' Libft
</h1>
<p align="center">
	<b><i>Development repo for 42cursus' Libft project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/appinha/42cursus"><b>42cursus repo</b></a>.
</p>
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/your-username/libft?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/your-username/libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/your-username/libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/your-username/libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/your-username/libft?color=brightgreen" />
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
🗣️ About
The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects.

For detailed information, refer to the subject of this project.

🚀 TLDR: This project consists of coding basic C functions (see below), which are then compiled into a library for use in other projects of the cursus.

Functions from <ctype.h> library
ft_isascii - Test for ASCII character.
ft_isalnum - Alphanumeric character test.
ft_isalpha - Alphabetic character test.
ft_isdigit - Decimal-digit character test.
ft_isprint - Printing character test (space character inclusive).
ft_tolower - Upper case to lower case letter conversion.
ft_toupper - Lower case to upper case letter conversion.
Functions from <stdlib.h> library
ft_atoi - Convert ASCII string to integer.
ft_calloc - Memory allocation.
Functions from <strings.h> library
ft_bzero - Write zeroes to a byte string.
ft_memset - Write a byte to a byte string.
ft_memchr - Locate byte in byte string.
ft_memcmp - Compare byte string.
ft_memmove - Copy byte string.
ft_memcpy - Copy memory area.
Functions from <string.h> library
ft_strlen - Find length of string.
ft_strchr - Locate character in string (first occurrence).
ft_strrchr - Locate character in string (last occurrence).
ft_strnstr - Locate a substring in a string (size-bounded).
ft_strncmp - Compare strings (size-bounded).
ft_strdup - Save a copy of a string (with malloc).
ft_strlcpy - Size-bounded string copying.
ft_strlcat - Size-bounded string concatenation.
Non-standard functions
ft_substr - Extract substring from string.
ft_strjoin - Concatenate two strings into a new string (with malloc).
ft_strtrim - Trim beginning and end of string with specified characters.
ft_split - Split string into an array of strings with specified delimiter.
ft_itoa - Convert integer to ASCII string.
ft_strmapi - Create new string from modifying string with specified function.
ft_putchar_fd - Output a character to given file.
ft_putstr_fd - Output string to given file.
ft_putendl_fd - Output string to given file with newline.
ft_putnbr_fd - Output integer to given file.
Linked list functions
ft_lstnew - Create new list.
ft_lstsize - Count elements of a list.
ft_lstlast - Find last element of list.
ft_lstadd_back - Add new element at end of list.
ft_lstadd_front - Add new element at beginning of list.
ft_lstdelone - Delete element from list.
ft_lstclear - Delete sequence of elements of list from a starting point.
ft_lstiter - Apply function to content of all list's elements.
ft_lstmap - Apply function to content of all list's elements into new list.
Note: functions marked with * are bonus functions (not mandatory by the project's subject).

📑 Index
@root

📁 libft: Updated source code, refactored for use in other projects; includes additional functions for string manipulation, memory management, and linked list operations.
📁 submX folder(s): Source code submitted to the cursus (including failed and succeeded submissions).
📁 testing: My own testing program.
🛠️ Usage
Requirements
The library is written in C language and thus needs the gcc compiler and some standard C libraries to run.

Instructions
1. Compiling the library

To compile the library, run:

sh
Copy code
$ cd path/to/libft && make
2. Using it in your code

To use the library functions in your code, simply include its header:

c
Copy code
#include "libft.h"
and, when compiling your code, add the required flags:

sh
Copy code
-lft -L path/to/libft.a -I path/to/libft.h
📋 Testing
1. First, configure the path to the libft folder in the Makefile (inside /testing/):

Makefile
Copy code
#############################
## Path to Libft directory ##
#############################
DIR		= ../
2. Then run:

sh
Copy code
make t
Third-party testers
jtoty/Libftest
alelievr/libft-unit-test
Night-squad/libft-war-machine-v2019
t0mm4rx/libftdestructor
