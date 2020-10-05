#include "holberton.h"
/**
* _strspn - gets the length of matching bytes from a substring
* @s: string pointer to read matches from
* @accept: the prefix to check with
*
* Return: match length
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int mat = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				mat++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (mat);
}
