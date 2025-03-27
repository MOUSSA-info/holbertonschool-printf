Readme-Printf

# _printf

DESCRIPTION.:
The _printf function mimics a subset of the standard C library’s printf, focusing on core formatting for characters, strings, and percentage literals. It writes output to stdout and returns the count of printed characters (excluding the null byte). Below are key implementation details.




# Files
main.h: Header file with function prototype.

_printf.c: Core implementation using va_list argument handling.

print_char.c: Handles %c specifier.

print_string.c: Handles %s specifier.

puts.c : Handle these functions  %c %s %% specifier.
_putchar ; Handle function writes a single character to the standard output and returns the character's ASCII value or EOF in case of an error.

This README provides essential implementation details, usage examples, and clear boundaries of functionality. The structure mirrors common C project documentation while adhering to the specified requirements.



![Alt text](https://drive.google.com/file/d/1U-wjFMTZBPMgve6OQBxjcdbi1-ipA9SP/view?usp=drive_link)

A mettre à jour au fur et à mesure 
![Texte alternatif](https://github.com/MOUSSA-info/holbertonschool-printf/blob/b2ab9d9200aaab8bd4cb0ce55794a66e09e4546d/Capture%20d%E2%80%99e%CC%81cran%202025-03-25%20a%CC%80%2012.35.31.png)

holbertonschool-printf
│── main.h          # Header file (prototypes and includes),
│── _printf.c       # Main _printf function,
│── format_spec.c   # Handling of specifiers (%c, %s, %d, etc.),
│── utils.c         # Utility functions (ft_putchar, ft_putstr, etc.),
│── main.c          # test file,
│── README.md       # Project documentation,
│── man_3_printf.1  # Manual page (_printf),
│── Makefile        # Simplified compilation.


# This project is a custom implementation of printf in C.

# 📌 Features

c: Displays a character

s: Displays a string

%: Displays a percentage (%%)


# 🚀 Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c



# Author

# Mahamat Abdallah MOUSSA
# PATRICE Bolin
# CISSE AHMED
