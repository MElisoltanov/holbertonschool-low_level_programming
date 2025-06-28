# C - Pointers, arrays and strings

This project introduces basic operations on pointers, arrays, and strings in the C programming language. Below is a description of each function implemented during the project.

## Task Descriptions

- **0-reset_to_98.c**  
  Contains the function `reset_to_98` which takes a pointer to an integer and updates its value to 98.

- **1-swap.c**  
  Defines the function `swap_int` which swaps the values of two integers using pointers.

- **2-strlen.c**  
  Implements the function `_strlen` that returns the length of a string without using the standard library.

- **3-puts.c**  
  Implements the function `_puts` that prints a string followed by a new line using `_putchar`.

- **4-print_rev.c**  
  Defines `print_rev` which prints a string in reverse, character by character.

- **5-rev_string.c**  
  Contains `rev_string`, a function that reverses a string in place (modifies the original string).

- **6-puts2.c**  
  Implements `puts2`, which prints every other character of a string starting with the first one.

- **7-puts_half.c**  
  The function `puts_half` prints the second half of a string. If the string length is odd, it prints from `(length + 1) / 2`.

- **8-print_array.c**  
  Defines `print_array`, a function that prints `n` elements of an integer array, separated by commas and spaces.

- **9-strcpy.c**  
  Implements `_strcpy`, a custom version of the standard `strcpy`, which copies a string including the null terminator to a destination buffer.

- **100-atoi.c**  
  Defines `_atoi`, a function that converts a string to an integer. It handles leading characters, multiple `+` and `-` signs, and stops reading at the first non-digit after digits.

## Compilation

All `.c` files were compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

