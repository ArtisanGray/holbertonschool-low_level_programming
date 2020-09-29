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
*
*
*
*
*/
void rev_string(char *s)
{
	char tmp, *s2 = s;
	int len = _strlen(s) - 1, i, j = 0;

	for (i = len; i >= len / 2; i--, j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s2[j] = tmp;
		
	}
}
