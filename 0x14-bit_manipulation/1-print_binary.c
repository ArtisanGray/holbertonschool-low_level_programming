#include "holberton.h"
/**
* shift - uses recursion to right shift a number
* @n: number to shift
*/
void shift(unsigned long int n)
{
	if (n == 0)
		return;
	shift(n >> 1);
	_putchar((n & 1) + '0');
}
/**
* print_binary - prints an unisigned int in binary
* @n: input number to convert
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	shift(n);
}
