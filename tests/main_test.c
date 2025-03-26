#include "main.h"
#include <stdio.h>

/**
 * main - Fonction pour tester _printf
 * Description: Teste différentes fonctionnalités de _pprintf
 * avec divers types de formatage %c, %s, %%
 * Return 0 si tous fonctionne correctement
 */

int main(void)
{
	_printf("Character: %c\n", 'A');

	_printf("string: %s\n", "Hello, world");

	_printf("percent: %%\n");

	return (0);
}
