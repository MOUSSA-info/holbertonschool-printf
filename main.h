#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
<<<<<<< HEAD

int _printf(const char *format, ...);
int _putchar(char c);

#endif 
=======
#include <unistd.h>

// Prototype de la fonction principale
int _printf(const char *format, ...);

// Prototypes des fonctions utilitaires
int handle_format(const char *format, va_list args);
int print_char(char c);
int print_string(char *str);
int print_percent(void);

#endif /* MAIN_H */

>>>>>>> 67a1d29cd5046ce2bccb428a0cfd6248b3d3e431
