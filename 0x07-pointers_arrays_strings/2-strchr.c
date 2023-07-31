#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: The pointer for the character to be returned
 * @c: The character to be located
 * Return: Return a pointer of the first occurance of 'c' or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
