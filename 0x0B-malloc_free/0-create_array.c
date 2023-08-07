#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Function creates size of array with dynamic size
 *
 * @size: this is the size of array
 * @c: this is the character to fill the array
 * Return: returns the pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;/*initializing the array pointer variable pointing to c*/
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = (char *)malloc(sizeof(char) *  size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
