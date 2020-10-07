#include "holberton.h"
/**
* factorial - returns the factorial of a given number
* @n: number to factorialize
*
* Return: 1 on 0, -1 on negative, factorial on success
*/
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	return (-1);
}
