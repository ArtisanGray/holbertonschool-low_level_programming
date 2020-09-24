#include "holberton.h"
/**
* _isupper - checks if an ascii value is an uppercase letter
* @c: input ascii value
*
* Return: 0 on fail, 1 on success
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
