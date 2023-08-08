#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - Function returns pointer of 2-dimensional array
 *
 * @width: column of array
 * @height: row of array
 * Return: returns pointer of newly allocated memmory
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int i; /*used to iltereate through to free the memory allocation */
	int **ar;/* pointer that stores the newly allocated memory */

	if (width <=0 || height <= 0)/*check for negative rows  or column */
	{
		return (NULL);
	}
	/*allocate memory for the rows */
	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		return (NULL);
	}
	/*allocating memory for columns and initializing */
	for (h = 0; h < height; h++)
	{
		ar[h] = (int *)malloc(sizeof(int) * width);
		if (ar[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			ar[h][w] = 0;
		}
	}
	return (ar);
}
