#include "main.h"

/**
 * get_endianness - function
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i = 1';

	unsigned char *a = (unsigned char *) &i;

	return (*a == 1);
}
