#include "main.h"

/**
* _printf - Produit une sortie de chaine
* @format: chaine le format
* Return: le nombre de caractère imprimer -1 en cas d'erreur
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;int i = 0;

	if (!format)
	return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += _print_string(va_arg(args, char *));
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'd' || format[i] == 'i')
			{
				if (format[i + 1] != '\0' && format[i + 1] != '%')
			{
				count += print_number(va_arg(args, int));
			}
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
			}	
			else
				return (-1);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
