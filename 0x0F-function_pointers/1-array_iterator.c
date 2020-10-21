#include "function_pointers.h"
/**
* array_iterator - iterates through an array and calls an action
* @array: array of integers
* @size: size of the array
* @action: function pointer
*
* Return: none
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
