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
	for (c = 65; c <= 90; c++)
	{
		if (c > 65)
			return (1);
		else
			return (0);
	_putchar('\n');
}
