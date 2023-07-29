#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (*(dest + len_dest) != '\0')
	{
		len_dest++;
	}

	while (*(src + len_src) != '\0')
	{
		*(dest + len_dest) = *(src + len_src);
		len_src++;
	}
	*(dest + len_dest) = '\0';
	return (dest);
}
