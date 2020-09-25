#include "holberton.h"
/**
* print_number - prints numbers
* @n: input integer
* Return: null
*/
void print_number(int n)
{
	int div = 1000000000;
	int n2;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
			n2 = 2147483647;
		else
			n = -n;
	}
	while (div / 10 != 0)
	{
		if (n / div != 0)
		{
			_putchar('0' + ((n / div) % 10));
		}
		div /= 10;
	}
	_putchar('0' + (n2 == 2147483647 ? 8 : n % 10));
}
