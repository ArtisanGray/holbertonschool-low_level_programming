#include "holberton.h"
/**
* print_array - prints an array
* @a: the array used to print
* @n: number of elements to print
*
* Return: null
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
