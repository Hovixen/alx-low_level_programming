#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - fuction rellocates a memory block with malloc and free
 * @ptr: pointer to memory previously allocated.
 * @old_size: size of allocated space for prt.
 * @new_size: size in byte of new memory block.
 * Return: returns pointer of new memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, dup_size = 0;
	char *ar;
/*possible condition of the arguments to show if the function could run*/
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	/*memory allocation*/
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	/*copying data from old memory to new memory*/
	dup_size = old_size;
	if (new_size < old_size)
		dup_size = new_size;
	for (i = 0; i < dup_size; i++)
	{
		ar[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (ar);
}
