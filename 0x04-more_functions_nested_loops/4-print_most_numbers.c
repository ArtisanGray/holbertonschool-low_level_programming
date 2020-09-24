#include "holberton.h"
/**
* print_most_numbers - prints 0-9, exc 2 and 4
*
* Return: null
*/
void print_most_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
