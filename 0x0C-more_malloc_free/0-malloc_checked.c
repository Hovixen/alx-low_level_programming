#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Function allocates memory to a pointer
 * @b: passed argument
 * Return: return pointer if successfull or null if failed
 */
void *malloc_checked(unsigned int b)
{
	/*This void is used when the type of pointer is not known*/
	void *ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
