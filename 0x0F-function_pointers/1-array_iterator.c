#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function executes a function given as a parameter
 * @array: array parameter argument
 * @size: size of array
 * @action: function pointer given as a parameter.
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i; /*used for iteration*/

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
