#include "search_algos.h"
/**
* binary_search - searches for a value within a list
* @array: given array of integers
* @size: the size of the array
* @value: value to look for in the list
*
* Return: indice value was found or -1 on fail.
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0;
	unsigned int right = size - 1;
	int middle;

	if (array)
	{
		while (left <= right)
		{
			print_tofro(array, left, right);
			middle = left + (right - left) / 2;
			if (array[middle] == value)
				return (middle);
			if (array[middle] < value)
				left = middle + 1;
			else
				right = middle - 1;
		}
	}
	return (-1);
}
/**
* print_tofro - prints formatted sequence of the current search iteration
* @arr: array given to print indices from
* @l: left starting indice
* @r: right starting indice
*
* Return: none
*/
void print_tofro(int *arr, unsigned int l, unsigned int r)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = l; i < r + 1; i++)
	{
		printf("%d", arr[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}
