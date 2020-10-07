#include "holberton.h"
/**
* _strlen_recursion - finds the length of a string recursively
* @s: string pointer
*
* Return: 0, or length
*/
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
		return (i + _strlen_recursion(s + 1));
	return (0);
}
