#include "holberton.h"
/**
* _realloc - reallocates an area in memory
* @ptr: void ptr of previously allocated memory
* @old_size: old size of previous allocation
* @new_size: new size of reallocation
*
* Return: null
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int temp;

	temp = new_size + old_size;
	temp++;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
