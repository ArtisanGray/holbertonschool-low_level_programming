#include "search_algos.h"

/**
* linear_search - searchs through a given array to find given value.
* @array: the given array
* @size: the size of the array
* @value: value to search for
*
* Return: indice where value is located, -1 on fail
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
