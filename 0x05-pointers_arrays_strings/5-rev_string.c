#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int len = 0;
	int strt = 0;
	int end = len - 1;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	while (strt < end)
	{
		temp = s[strt];
		s[strt] = s[end];
		s[end] = temp;
		strt++;
		end--;
	}
}
