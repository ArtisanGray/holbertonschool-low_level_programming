#include "holberton.h"
/**
* _isdigit - checks if an ascii value is a digit
* @c: input ascii value
*
* Return: 0 on fail, 1 on success
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
