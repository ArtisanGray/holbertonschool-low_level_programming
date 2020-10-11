#include "holberton.h"
/**
* _strpbrk - searches a string for the first instance of a byte
* @s: string pointer
* @accept: string of bytes to check string with
*
* Return: null on fail, location of character on success
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] != '\0')
			return (s + i);
		else if (accept[j] == '\0' && s[i + 1] == '\0')
			break;
	}
	return (NULL);
}
