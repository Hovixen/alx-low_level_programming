#include "main.h"
/**
 * _strspn - Function gets the length of a prefix substring
 *
 * @s: pointer of string prefix
 * @accept: pointer of string to be checked.
 *
 * Return: returns the lenght of the of byte in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len_accept;
	int match;
	unsigned int len_s;

	for (len_s = 0; *(s + len_s) != '\0' ; len_s++)
	{
		match = 0;
		for (len_accept = 0; *(accept + len_accept) != '\0' ; len_accept++)
		{
			if (*(s + len_s) == *(accept + len_accept))
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;
	}
	return (len_s);
}
