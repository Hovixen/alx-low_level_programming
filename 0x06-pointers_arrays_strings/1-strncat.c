#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0;

	while (*(dest + len_dest) != '\0')
	{
		len_dest++;
	}

	while (*(src + len_src) != 0 && len_src < n)
	{
		*(dest + len_dest) = *(src + len_src);
		len_src++;
		len_dest++;
	}
	*(dest + len_dest) = '\0';
	return (dest);
}
