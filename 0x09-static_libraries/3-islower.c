#include "holberton.h"
/**
* _islower - checks if a letter is lowercase
* @c: input integer
*
* Return: 1 on check, 0 on fail
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
