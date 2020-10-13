#include "holberton.h"
/**
* free_grid - frees a 2d array
* @grid: the array
* @height: the size of the array
*
* Return: null
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
