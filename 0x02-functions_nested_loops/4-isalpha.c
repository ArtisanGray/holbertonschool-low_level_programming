#include "holberton.h"
/**
* _isalpha - checks if an ascii value is alphabetic
* @c: input ascii value
*
* Return: 0 on fail, 1 on match
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
