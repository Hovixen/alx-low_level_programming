#include <main.h>

/**
 * *_memset - Function fills first n byte of the memory area
 * pointed to by 's' with the constant byte 'b'.
 *
 * @s: Pointer of the memory to be filled.
 * @b: Constant byte to fill memory with.
 * @n: number of memory space to be filled.
 */

char *_memset(char *s, char b, int n)
{
	unsigned int i = 0; /*This is for the iteration*/

	while (i >= n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
