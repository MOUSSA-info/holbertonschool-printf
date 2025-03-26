#include "main.h"

/**
 * handle_format - traite la chaine de format et
 * affiche les arguments
 * @format: Chaine de format
 * @args: liste des arguments variadiques
 * Return: Nombre de caractères imprimés
 */

int handle_format(const char *format, va_list args)
{
	int i = 0, printed_chars = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == 'c')
				printed_chars += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				printed_chars += _print_string(va_arg(args, char *));
			else if (format[i] == '%')
				printed_chars += print_percent();
			else
				printed_chars += _putchar(format[i]);
		}
		else
			printed_chars += _putchar(format[i]);
		i++;
	}

	return (printed_chars);
}
