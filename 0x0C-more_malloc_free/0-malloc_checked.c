#include "holberton.h"
/**
* malloc_checked - allocates memory with b bytes
* @b: bytes to allocate
*
*
* Return: new allocated void pointer
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
