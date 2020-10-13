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
* str_concat - concatenates two strings
* @s1: string pointer 1
* @s2: string pointer 2
*
* Return: string, or null on fail
*/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *cat = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		cat[i] = s2[j];
	cat[i + j] = '\0';

	return (cat);
}
