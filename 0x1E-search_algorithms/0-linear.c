#include "search_algos.h"

/**
 * linear_search - function searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: pointer to the first element of array to search
 * @size: number of elements in the array
 * @value: The value to search for
 * Return: returns the first index the value is located
 */


int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
