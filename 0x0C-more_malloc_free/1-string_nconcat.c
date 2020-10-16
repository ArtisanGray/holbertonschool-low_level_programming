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
	unsigned int i, j, len, len2;
	char *cat;

	if (s1 == NULL)
		s1 = "";

	len = _strlen(s1);

	if (s2 == NULL)
		s2 = "";
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	cat = malloc(sizeof(char) * len + n + 1);

	if (cat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		cat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
	{
		if (s2[j] != '\0')
		{
			cat[i] = s2[j];
		}
		else
			break;
	}
	cat[i] = '\0';
	return (cat);
}
