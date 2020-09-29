#include "holberton.h"
/**
* swap_int - swaps the values of two integer pointers
* @a: integer pointer 1
* @b: integer pointer 2
*
* Return: null
*/
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
