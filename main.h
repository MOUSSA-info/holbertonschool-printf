#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);

#endif 

#include <unistd.h>

/* Prototype de la fonction principale*/
int _printf(const char *format, ...);

/* Prototypes des fonctions utilitaires*/
int handle_format(const char *format, va_list args);
int _putchar(char c);
int _print_string(char *str);
int print_percent(void);
#endif /* MAIN_H */


