#include "holberton.h"
#include <limits.h>
/**
* print_number - prints numbers
* @n: input integer
* Return: null
*/
void print_number(int n)
{
	int div = 1000000000;
	int flippy = 0;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			flippy = 1;
			n++;
		}
		_putchar('-');
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
	_putchar('0' + (flippy == 1 ? 8 : n % 10));
}
