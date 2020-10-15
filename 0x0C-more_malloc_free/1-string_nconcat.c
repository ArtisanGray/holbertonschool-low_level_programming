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
* string_nconcat - concatenates n bytes of a string
* @s1: input string 1
* @s2: input string 2
* @n: n bytes to concat
*
* Return: null on fail, new string on success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = _strlen(s1), len2 = _strlen(s2);
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cat = malloc(sizeof(char) * (len * n + 1));

	if (cat == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
	{
		if (j < len2)
		{
			cat[i] = s2[j];
		}
		else
			cat[i] = '\0';
	}
	cat[i] = '\0';
	return (cat);
}
