#include "search_algos.h"
/**
* binary_search - searches in half intervals for value
* @array: given array to search through
* @size: size of the array to search through
* @value: value to search for
*
* Return: -1 on failure or null, value index otherwise.
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i, j;

	if (array)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			for (i = left, j = right; i <= j; i++)
			{
				printf("%d", array[i]);
				if (i < j)
					printf(", ");
			}
			printf("\n");
			mid = left + (right - left) / 2;
			if (array[mid] == value)
				return (mid);
			if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
