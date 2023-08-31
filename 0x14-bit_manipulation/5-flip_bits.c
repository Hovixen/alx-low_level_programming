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
	unsigned int xor;
	unsigned int count = 0;

	if (n == 0 || m == 0)
		return (0);
	xor = n ^ m;

	while (xor != 0)
	{
		count = count + (xor & 1);
		xor >>= 1;
	}
	return (count);
}
