#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - allocates and initializes bytes in memory
* @nmemb: number of bytes to allocate
* @size: data size of bytes to allocate
*
* Return: noid
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *noid;

	if (size == 0 || nmemb == 0)
		return (NULL);

	noid = malloc(size * nmemb);

	if (noid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		noid[i] = 0;

	return ((void *)noid);
}
