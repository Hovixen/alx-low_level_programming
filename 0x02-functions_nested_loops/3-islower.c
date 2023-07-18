#include "main.h"

/**
 * _islower - This checks whether a character is lowercase
 *
 * @c: This is the ASCII code
 *
 * Return: Returns 1 if it is a lowercase or 0 if it is not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
