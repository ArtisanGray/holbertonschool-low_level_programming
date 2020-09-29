#include "holberton.h"
/**
* _strlen - returns string length
* @s: string to measure
*
*
* Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		continue;
	return (i);
}
/**
* puts_half - prints half of a string
* @str: input string pointer
*
* Return: null
*/
void puts_half(char *str)
{
	int len = _strlen(str), i, oc = 0;

	if (len % 2 != 0)
		oc = 1;
	for (i = ((len - oc) / 2); i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
