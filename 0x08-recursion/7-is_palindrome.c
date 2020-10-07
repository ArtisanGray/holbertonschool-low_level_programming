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
* palindrome - checks if string is a palindrome
* @i: starting point of string
* @len: ending point of string
* @s: string
*
* Return: 0 if not, 1 if success
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
* is_palindrome - checks if a word is palindrome
* @s: string pointer
*
* Return: 0 on fail, 1 on success
*/
int is_palindrome(char *s)
{
	int fr = 0;
	int bk = _strlen_recursion(s) - 1;
	int is_palin = palindrome(fr, bk, s);

	if (*s == '\0')
		return (1);
	return (is_palin);
}
