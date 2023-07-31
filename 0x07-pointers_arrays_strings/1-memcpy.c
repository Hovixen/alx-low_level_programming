#include "main.h"

/**
 * _memcpy - Function copies 'n' byte from memory area src
 * to memory area dest
 *
 * @src: source memory being copied
 * @dest: destination memory after copying
 * @n: number of bytes to be copied
 * Return: returns destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
