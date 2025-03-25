#include "MAIN_H"

void pf_putnbr(int n)
{ 
unsigned int num;

if (n < 0)
{
	_putchar('-');
	num = -n;

} 
	else
	{
		num = n;
	}

	if (num / 10)
	{
	       	pf_putnbr(num / 10);
	}
_putchar(num % 10+ n'0');
}
