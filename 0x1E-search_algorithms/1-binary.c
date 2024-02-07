#include "search_algos.h"

/**
 * binary_search - function searches for a value in a sorted array of integers
 * using binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of the elements in the array
 * @value: the target value to search
 * Return: returns the index where value is found or -1 when failed
 */

int binary_search(int *array, size_t size, int value)
{
	int i, L = 0, R = size - 1, mid;

	if (!array)
		return (-1);

	while (L <= R)
	{
		mid = (L + R) / 2;
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i == R)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			L = mid + 1;
		else
			R = mid - 1;
	}
	return (-1);
}
