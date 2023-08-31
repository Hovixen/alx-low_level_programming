#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at a given index.
 * @n: pointer to the unsigned long integer
 * @index: given index(position)
 * Return: return (1) success or (0) failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1UL << index);
	return (0);
}
