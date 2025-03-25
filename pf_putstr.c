#include "PRINTF_H"

void pf_putstr(char *str)
{
	if (str == NULL)
	{
	str = "(NULL)";
}
	while (*str)
{ 	_putchar(*str++);
}

}
