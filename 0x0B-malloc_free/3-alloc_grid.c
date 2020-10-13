#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 * Return: P to allocated in array.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width == 0)
	{
		return (NULL);
	}
	if (height == 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		*(grid + x) = (int *)malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (x = width; x >= 0; x--)
			{
				free(grid[x]);
			}
			free(grid);
			grid = NULL;
			return (grid);
		}
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
