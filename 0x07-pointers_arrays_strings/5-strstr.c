#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int hay, need;

	for (hay = 0; haystack[hay] != '\0'; hay++)
	{
		for (need = 0; needle[need] != '\0'; need++)
		{
			if (haystack[hay + need] != needle[need])
			{
				break;
			}
		}
		if (needle[need] == '\0')
		{
			return (&haystack[hay]);
		}
	}
	return ('\0');
}
