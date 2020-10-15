#include "holberton.h"
#include <stdlib.h>
/**
* array_range - creates an array of integer
* @min: minimum integer input
* @max: maximum integer input
*
* Return: null or integer on success
*/
int *array_range(int min, int max)
{
	int j, i = min;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (j = 0; i <= max; j++, i++)
		arr[j] = i;

	return (arr);
}
