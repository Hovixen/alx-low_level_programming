#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function creates an array of integers
 * @min: minimum integer argument
 * @max: maximum integer argument
 * Return: returns pointer of the newly created array
 */

int *array_range(int min, int max)
{
	int i, range_size;
	int *ar = 0;

	if (min > max)
		return (NULL);
	range_size = (max - min);
	ar = malloc(sizeof(int) * (range_size + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= range_size; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
