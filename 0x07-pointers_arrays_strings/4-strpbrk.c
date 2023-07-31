#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 *
 * @s: pointer prefix
 * @accept: pointer to be checked
 * Return: returns a pointer bytes in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int len_s, len_accept;

	for (len_s = 0; *(s + len_s) != '\0'; len_s++)
	{
		for (len_accept = 0; *(accept + len_accept) != '\0'; len_accept++)
		{
			if (*(s + len_s) == *(accept + len_accept))
			{
				return (s + len_s);
			}
		}
		if (*(s + len_s) == *(accept + len_accept))
			return (s);
	}
	return ('\0');
}
