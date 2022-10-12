#include "search_algos.h"
/**
* linear_search - searches array for given value
* @array: array pointer given as parameter, what to search
* @size: size in elements of the given array
* @value: value to search and compare for
*
* Return: -1 on failure, index otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			return (i);
		}
	}
	return (-1);
}
