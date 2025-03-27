#include "main.h"

/**
 * _printf - Produit une sortie de chaine
 * @format: chaine le format
 * Return: le nombre de caractère imprimer -1 en cas d'erreur
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

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
			else if (format[i])
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
			else
				return (-1);
		}
		else
			count += _putchar(format[i]);
<<<<<<< HEAD
		}
		else
		{
			return (-1);
		}
		}
		else
		{
		count += _putchar(format[i]);
		}
=======
>>>>>>> 1f5e498baacb58b22069584b58e8e5238cc6cbbb
		i++;
	}
	va_end(args);
	return (count);
}
