#include "holberton.h"
/**
* alloc_grid - allocates a grid of memory
* @width: width of array
* @height: rows of array
*
* Return: null on fail, new array on success
*/
int **alloc_grid(int width, int height)
{
	int i, j, fail;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(int) * width);
		if (*(grid + i) == NULL)
		{
			for (fail = 0; fail <= i; fail++)
				free(grid[fail]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
