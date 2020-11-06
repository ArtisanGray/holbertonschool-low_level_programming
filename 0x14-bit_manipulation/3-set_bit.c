#include "holberton.h"
/**
* set_bit - sets a bit to 1
* @n: integer to set bit within
* @index: indice to set value at
* Return: -1 on fail, 1 otherwise
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int set;

	if (index > 31)
		return (-1);

	set = 1 << index;
	*n = *n | set;
	return (1);
}
