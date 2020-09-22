#include "holberton.h"
/**
* print_to_98 - prints to 98, whether it be past 98
* @n: input integer
*
* Return: null
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n <= 97)
				printf(", ");
		}
		printf("\n");
	}
	else
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n >= 99)
				printf(", ");
		}
		printf("\n");
}
