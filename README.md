Readme-Printf

<<<<<<< HEAD
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

=======
A mettre à jour au fur et à mesure 
![Texte alternatif](https://github.com/MOUSSA-info/holbertonschool-printf/blob/b2ab9d9200aaab8bd4cb0ce55794a66e09e4546d/Capture%20d%E2%80%99e%CC%81cran%202025-03-25%20a%CC%80%2012.35.31.png)

holbertonschool-printf/
│── main.h          # Fichier d'en-tête (prototypes et includes)
│── _printf.c       # Fonction principale _printf
│── format_spec.c   # Gestion des spécificateurs (%c, %s, %d, etc.)
│── utils.c         # Fonctions utilitaires (ft_putchar, ft_putstr, etc.)
│── main.c          # Fichier de test
│── README.md       # Documentation du projet
│── man_3_printf.1  # Page de manuel (_printf)
│── Makefile        # Compilation simplifiée


# _printf - Projet de printf personnalisé

Ce projet est une implémentation personnalisée de `printf` en C.

## 📌 Fonctionnalités
- `c` : Affichage d'un caractère
- `s` : Affichage d'une chaîne de caractères
- `%` : Affichage d'un pourcentage (`%%`)

## 🚀 Compilation
```sh
make
>>>>>>> 67a1d29cd5046ce2bccb428a0cfd6248b3d3e431


