#include "holberton.h"
/**
* _strchr - finds a character within a string
* @s: string pointer given
* @c: character to find
*
* Return: NULL on fail, string if successful
*/
char *_strchr(char *s, char c)
{
	int i;

	if (s != NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
				return (s + i);
		}
	}
	return (NULL);
}
