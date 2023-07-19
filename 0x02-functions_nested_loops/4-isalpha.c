#include "main.h"

/**
 * _isalpha - This code shows whether an character is an alphabet or not
 *
 * @c: This is the character in ASCII
 *
 * Return: It retuns 1 for an alphabet and 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
