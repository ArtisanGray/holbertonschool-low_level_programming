#include "holberton.h"
/**
* _pow_recursion - gets the power of a number using recursion
* @x: integer
* @y: power
*
* Return: -1 on negative number, 1 on 0, pow on success
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
