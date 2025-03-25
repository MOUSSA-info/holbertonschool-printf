#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);

void pf_putstr(char *str);

void pf_putnbr(int n);

#endif 
