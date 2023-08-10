#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - functions allocate memory to an array using malloc
 * @nmemb: number of elements
 * @size: number of size
 * Return: returns pointer of allocated memotry
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int sum_size = 0, i;
	char *ar;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	sum_size = nmemb * size;
	ar = (char *)malloc(sum_size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < sum_size; i++)
		ar[i] = 0;
	return (ar);
}
