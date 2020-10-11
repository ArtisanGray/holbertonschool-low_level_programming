#include "holberton.h"
/**
* _memcpy - copies bytes from one area to another
* @dest: destination area to copy to
* @src: source area to copy from
* @n: number of bytes to copy
*
* Return: desination area with modified data
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
