#include "main.h"

/**
 * print_numbers - This fuction prints out the numbers 0 - 9
 *
 * Return: it is void.
 */

void print_numbers(void)
{
	int n = 0; /* declaration and initialization of variable*/

	for (; n <= 9; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
