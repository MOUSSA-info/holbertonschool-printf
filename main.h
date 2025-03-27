#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>


/* Prototype de la fonction principale*/
int _printf(const char *format, ...);

/* Prototypes des fonctions utilitaires*/
int _putchar(char c);
int _print_string(char *str);
int print_percent(void);

#endif /* MAIN_H */
