#include "holberton.h"
/**
* print_diagsums - prints sums of diagonals in matrices
* @a: integer array
* @size: size of array
*
* Return: null
*/
void print_diagsums(int *a, int size)
{
	int i, j, ld = 0, rd = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				rd +=  *((a + i * size) + j);
		}
		ld += *((a + i * size) + ((j - 1) - i));
	}
	printf("%d, %d\n", rd, ld);
}
