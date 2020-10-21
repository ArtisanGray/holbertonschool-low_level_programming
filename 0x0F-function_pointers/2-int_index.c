#include "function_pointers.h"
/**
* int_index - searches for an integer within an array
* @array: an array of integers
* @size: size of the array
* @cmp: pointer to a comparison function
*
* Return: 0 on default, -1 on fail, indice on success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
