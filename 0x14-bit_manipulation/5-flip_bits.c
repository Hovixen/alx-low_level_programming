#include "main.h"

/**
 * flip_bits - function returns the number of bits needed to flip
 * to get from one number to another.
 * @n: first number parameter.
 * @m: second number parameter.
 * Return: returns the number of bit.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = (n ^ m);
	unsigned int count = 0;

	/*x = (n ^ m);*/

	while (x != 0)
	{
		count += (x & 1);
		x >>= 1;
	}
	return (count);
}
