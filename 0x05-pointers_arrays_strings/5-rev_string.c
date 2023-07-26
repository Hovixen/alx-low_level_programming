#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	int strt = 0;
	int end = len - 1;
	char temp;

	while (strt < end)
	{
		temp = s[strt];
		s[strt] = s[end];
		s[end] = temp;
		strt++;
		end--;
	}
	_putchar ('\n');
}
