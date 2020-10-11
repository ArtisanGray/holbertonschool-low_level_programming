#include "holberton.h"
/**
* _memset - sets an area of memory with a specific piece of data
* @s: string pointer/area of memory
* @b: constant byte to set
* @n: number of bytes to set
*
* Return: area of memory with reset bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
