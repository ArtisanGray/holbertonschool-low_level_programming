#include "holberton.h"
/**
* _abs - computes the absolute value of an integer
* @c: input integer
*
* Return: absolute value
*/
int _abs(int c)
{
	if (c < 0)
		return (-c);
	return (c);
}
