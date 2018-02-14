#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to an array grid
 */
int **alloc_grid(int height, int width)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(width * height * sizeof(int*));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			grid[j] = malloc(height * sizeof(int));
			if (grid == NULL)
				return (NULL);
			grid[i][j] = 0;
		}
	}
	return (grid);
}
