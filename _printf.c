#include "main.h"

/**
 * _printf - Fonction principale qui imite printf
 * @format: chaine de format avec des spécificateurs
 * Return: Nombre de caractères imprimés
 */

int _printf(const char *format, ...)
{
	va_list args;

	int printed_chars = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	printed_chars = handle_format(format, args);
	va_end(args);

	return (printed_chars);
}
