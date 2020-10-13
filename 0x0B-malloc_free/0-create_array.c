#include "holberton.h"
/**
* create_array - creates an array of initialized elements
* @size: size of the array to allocate in memory
* @c: byte to initialize it with
*
* Return: NULL on fail, new array on success
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
