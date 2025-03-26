#include "main.h"

/**
 * print_char - Affiche un caractère
 * @c: Caractère à afficher
 * Return: 1 nombre de caractères affichés
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Affiche une chaine de caractère
 * @str: chaine à afficher
 * Return: Nombre de caractères à affichés
 */

int print_string(char *str)
{
	int i = 0;

	if (!str)
		str = "(null)";
	while (str[i])
		print_char(str[i++]);

	return (i);
}

/**
 * print_percent - Affiche un pourcentage '%'
 * Return: 1 nombre de caractères affichés
 */

int print_percent(void)
{
	return (print_char('%'));
}
