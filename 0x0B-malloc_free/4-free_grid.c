#include <stdlib.h>
#include "main.h"

/**
 * free_grid - functions frees the memory allocated to a pointer
 *
 * @grid: pointer of array that memory was allocated
 * @height: row of array.
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i; /* used to iterate through the array */

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
