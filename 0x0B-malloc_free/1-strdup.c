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
* _strdup - duplicates a string and returns a new pointer
* @str: string to duplicate
*
* Return: null on fail, new string on success
*/
char *_strdup(char *str)
{
	int size = _strlen(str), i;
	char *dupe = malloc(sizeof(char) * size + 1);

	if (dupe == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dupe[i] = str[i];

	dupe[i] = '\0';

	return (dupe);
}
