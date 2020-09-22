#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @c: input integer
*
* Return: last digit
*/
int print_last_digit(int c)
{
	if (c == -2147483648)
	{
		_putchar('0' + 8);
		return (8);
	}
	if (c < 0 && c != -2147483648)
		c = -c;
	_putchar('0' + c % 10);
	return (c % 10);
}
