#include "holberton.h"
/**
* reverse_array - reverse an array of integers
* @a: array of integers
* @n: number of elements
*
* Return: nothing, null
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	for (i = 0; i < (n % 2 == 0 ? n / 2 : (n - 1) / 2); i++, j--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
