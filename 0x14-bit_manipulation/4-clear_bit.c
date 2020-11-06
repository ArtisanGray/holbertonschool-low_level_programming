#include "holberton.h"
/**
* clear_bit - sets a bit at index to 0
* @n: integer to set bit within
* @index: indice to set bit at
* Return: 1 on success, -1 on fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 31)
		return (-1);


	i = 1 << index;
	*n = *n & (~i);
	return (1);
}
