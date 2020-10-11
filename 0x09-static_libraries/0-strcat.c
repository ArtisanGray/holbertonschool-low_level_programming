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
* _strcat - concatenates two strings
* @dest: destination string to concat to
* @src: source string to concat from
*
* Return: destination string
*/
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest), i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
