#include "main.h"
/**
 * *_strchr - Function that locates a character in a string
 * @s: The pointer for the character to be returned
 * @c: The character to be located
 * Return: Return a pointer of the first occurance of 'c' or null
 */

char *_strchr(char *s, char c)
{
	int n = 0; /*This is the count of the lenght of the string*/

	while (*(s + n) != '\0')
	{
		if (*(s + n) == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
