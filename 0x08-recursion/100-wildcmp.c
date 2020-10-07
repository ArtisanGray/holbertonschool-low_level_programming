#include "holberton.h"
/**
* wildcmp - compares two strings
* @s1: string 1
* @s2: string 2
*
* Return: 1 on success and 0 on fail
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	return (0);
}
