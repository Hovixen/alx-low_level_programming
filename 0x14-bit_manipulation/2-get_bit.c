#include "main.h"

/**
 * get_bit - Function returns value of a bit at a given index
 * @n: unsigned long integer parameter.
 * @index: index (position)
 * Return: returns value of the bit or -1 when failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);

}
