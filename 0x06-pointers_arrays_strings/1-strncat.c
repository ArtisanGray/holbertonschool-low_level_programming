#include "holberton.h"
/**
* _strlen - returns string length
* @s: string to measure
*
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;
	return (i);
}
/**
* _strncat - concatenates n length of a string
* @dest: destination to append data to
* @src: source to append data from
* @n: bytes length to concat
*
* Return: desination string with concatenated data
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}

