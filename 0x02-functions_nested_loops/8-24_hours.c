#include "holberton.h"
/**
* jack_bauer - prints the 24 hour format
*
* Return: null
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(':');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			putchar('\n');
		}
	}
}
