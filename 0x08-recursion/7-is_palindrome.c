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
/**
*
*
*
*/
int palindrome(int i, int len, char *s)
{
	if (*(s + i) == *(s + len) && i != len)
	{
		return (palindrome(i + 1, len - 1, s));
	}
	if (*(s + i) != *(s + len))
		return (0);
	return (1);
}
/**
*
*
*
*
*/
int is_palindrome(char *s)
{
	int fr = 0;
	int bk = _strlen_recursion(s) - 1;
	int is_palin = palindrome(fr, bk, s);
	if (*s == '\0')
		return (1);
	return(is_palin);
}
