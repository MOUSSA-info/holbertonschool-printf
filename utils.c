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
 * _print_string - Affiche une chaine de caractère
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
 * print_number - Affiche un entier
 * @n: L'entier à afficher
 * Return: Le nombre de caractère affichés
 */

int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}

/**
 * print_percent - Affiche un pourcentage '%'
 * Return: 1 nombre de caractères affichés
 */

int print_percent(void)
{
	return (_putchar('%'));
}
