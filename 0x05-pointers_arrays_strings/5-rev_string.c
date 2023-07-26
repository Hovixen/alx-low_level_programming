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

	char *str;

	str = s;
	int beginning = 0;
	int end = len - 1;
	char temp;

	while (beginning < end)
	{
		temp = s[beginning];
		s[beginning] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
	_putchar ('\n');
}
