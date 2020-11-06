#include "holberton.h"
/**
* get_bit - gets the bit at index
* @n: integer passed as argument
* @index: indice of where to get bit's value
*
* Return: -1 on fail, otherwise on success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	return ((n >> index) & 1);
}
