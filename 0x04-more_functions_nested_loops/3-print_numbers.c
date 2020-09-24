#include "holberton.h"
/**
* print_numbers - prints 0-9
*
* Return: nothing, null
*/
void print_numbers(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
