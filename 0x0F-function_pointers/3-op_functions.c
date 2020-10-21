#include "3-calc.h"
/**
* op_add - adds and returns the sum of two integers
* @a: input integer argument 1
* @b: input integer argument 2
*
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - subtracts and the returns the difference of the integers
* @a: input integer 1
* @b: input integer 2
*
* Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiplies two numbers
* @a: input integer 1
* @b: input integer 2
*
* Return: mul
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - divides two numbers and returns dividend
* @a: input integer 1
* @b: input integer 2
*
* Return: dividend
*/
int op_div(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - returns the remainder of two divisors
* @a: input integer 1
* @b: input integer 2
*
* Return: remainder
*/
int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
