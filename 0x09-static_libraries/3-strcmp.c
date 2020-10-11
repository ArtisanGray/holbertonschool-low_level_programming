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
* _strcmp - compares two strings, returns a diff value
* @s1: string 1
* @s2: string 2
*
* Return: differential value
*/
int _strcmp(char *s1, char *s2)
{

	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			return (-(*s2) + *s1);
		}
	}
	return (0);
}
