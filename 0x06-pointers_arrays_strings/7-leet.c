#include "holberton.h"
/**
* leet - converts a string to use leetspeak
* @str: input string pointer
*
* Return: leet string
*/
char *leet(char *str)
{
	char *let = "aAeEoOtTlL";
	char *num = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j])
				str[i] = num[j / 2];
		}
	}
	return (str);
}
