#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	if (format == NULL)
	{
	return (-1);
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
		i++;
		if (format[i] == 'c')
		{
			count += _putchar(va_arg(args, int));
		}
		else if (format[i] == 's')
		{
			count += _print_string(va_arg(args, char *));
		}
		else if (format[i] == '%')
		{
			count += _putchar('%');
		}
		else if (format[i] != '\0')
		{
			count += _putchar('%');
			count += _putchar(format[i]);
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
		i++;
	}
	va_end(args);
	return (count);
}
