#include "holberton.h"
/**
* cap_string - capitalizes each word in a string
* @str: string pointer
*
* Return: capitalized string
*/
char *cap_string(char *str)
{
	char *sep = "	 \n,;.!?\"(){}";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
