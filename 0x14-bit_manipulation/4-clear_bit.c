#include "main.h"

/**
 * clear_bit - function set the value of a bit to 0 at a given index
 * @n: pointer to the unsigned long integer given.
 * @index: index(position) given.
 * Return: return (1) success or (-1) when failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int) * 8))
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
