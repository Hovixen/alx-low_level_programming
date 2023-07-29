#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	
	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src +n);
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
