#include "holberton.h"
/**
* rot13 - rotates the cipher of a string by 13
* @str: string pointer to be rotated
*
* Return: rotated string
*/
char *rot13(char *str)
{
	int i, j;
	char *alp = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *nyc = "nopqrstuvwxyzabcdefghiklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (str[i] == alp[j])
			{
				str[i] = nyc[j];
				break;
			}
		}
	}
	return (str);
}
