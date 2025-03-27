#include "main.h"

/**
 * _putchar - Affiche un caractère
 * @c: Caractère à afficher
 * Return: 1 nombre de caractères affichés
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Affiche une chaine de caractère
 * @str: chaine à afficher
 * Return: Nombre de caractères à affichés
 */

int _print_string(char *str)
{
	int i = 0;

	if (!str)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);

	return (i);
}

/**
 * print_percent - Affiche un pourcentage '%'
 * Return: 1 nombre de caractères affichés
 */

int print_percent(void)
{
	return (_putchar('%'));
}
