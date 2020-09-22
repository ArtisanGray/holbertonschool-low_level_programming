#include "holberton.h"
/**
* print_sign - returns a value based on the sign of an integer
* @n: input integer
*
* Return: 0 on 0, 1 on positive, -1 on negative
*/
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (1);
	return (0);
}
