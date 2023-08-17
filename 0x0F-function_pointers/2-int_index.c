#include <stdio.h>
#include "function_pointers.h"

/**
 *  int_index - function searches for an integer
 *  @array: array argument passed
 *  @size: size of array argument passed
 *  @cmp: function pointer used for comparing values
 *  Return: returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
