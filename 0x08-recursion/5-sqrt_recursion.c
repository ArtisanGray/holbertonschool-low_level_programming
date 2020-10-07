#include "holberton.h"
int _sqrt(int sqrt, int num);
/**
* _sqrt_recursion - finds the square root of a number recursively
* @n: input number given to find root of
*
* Return: root of number
*/
int _sqrt_recursion(int n)
{
	int tmp = 0;
	int root = _sqrt(tmp, n);

	return (root);
}
/**
* _sqrt - actually calculates the square root of a number
* @sqrt: temporary placeholder value for root
* @num: number given from previous function
*
* Return: -1 on fail, otherwise root
*/
int _sqrt(int sqrt, int num)
{
	if (sqrt * sqrt == num)
		return (sqrt);
	else if (sqrt * sqrt > num)
		return (-1);
	return (_sqrt(sqrt + 1, num));
}
