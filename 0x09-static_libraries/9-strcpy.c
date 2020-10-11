#include "holberton.h"
/**
* _strcpy - copies a string
* @dest: destination string
* @src: source string
*
* Return: new string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; dest[i] != '\0'; i++)
		dest[i] = '\0';

	return (dest);
}
