#include "holberton.h"
/**
* _prime - calcuates if a number is prime
* @i: "iterable"
* @n: input number from previous function call
*
* Return: 1 on success, 0 on fail
*/
int _prime(int i, int n)
{
	if (i == n && i > 1)
		return (1);
	if ((n % i == 0 && i > 1) || n <= 1)
		return (0);
	return (_prime(i + 1, n));
}
/**
* is_prime_number - finds if a number is prime, recursively
* @n: input integer
*
* Return: 11
*/
int is_prime_number(int n)
{
	int fact = 1, is_prime = _prime(fact, n);

	return (is_prime);
}
