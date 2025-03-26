Readme-Printf

A mettre à jour au fur et à mesure


_printf

DESCRIPTION.:
The _printf function mimics a subset of the standard C library’s printf, focusing on core formatting for characters, strings, and percentage literals. It writes output to stdout and returns the count of printed characters (excluding the null byte). Below are key implementation details.



Compilation:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c



Files
main.h: Header file with function prototype.

_printf.c: Core implementation using va_list argument handling.

print_char.c: Handles %c specifier.

print_string.c: Handles %s specifier.

puts.c : Handle these functions  %c %s %% specifier.

This README provides essential implementation details, usage examples, and clear boundaries of functionality. The structure mirrors common C project documentation while adhering to the specified requirements.



![Alt text](https://drive.google.com/file/d/1U-wjFMTZBPMgve6OQBxjcdbi1-ipA9SP/view?usp=drive_link)



