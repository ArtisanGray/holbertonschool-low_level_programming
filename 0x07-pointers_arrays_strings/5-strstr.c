#include "holberton.h"
/**
* _strstr - finds a substring within a string
* @haystack: string to search through
* @needle: string to search for
*
* Return: null on fail, location of substring on success
*/
char *_strstr(char *haystack, char *needle)
{
	int i, mat = 0;

	if (*needle == '\0')
		return (haystack);
	if ((*haystack != '\0'))
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (haystack[i] == needle[mat])
			{
				mat++;
				if (needle[mat + 1] == '\0')
				{
					return (haystack + (i - (mat - 1)));
				}
			}
			else if (haystack[i] != needle[mat] && mat > 0)
			{
				i -= mat - 1;
				mat = 0;
			}
		}
	}
	return (NULL);
}
