#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @c: input integer
*
* Return: last digit
*/
int print_last_digit(int c)
{
	if (c < 0)
		c = -c;
	_putchar('0' + c % 10);
	return (c % 10);
}
