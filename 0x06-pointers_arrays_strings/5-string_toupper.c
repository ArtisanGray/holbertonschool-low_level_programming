#include "holberton.h"
/**
* string_toupper - converts all lowercase letters in a string to upper
* @str: string pointer
*
* Return: string with changed letters
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
