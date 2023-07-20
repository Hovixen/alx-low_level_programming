#include "main.h"

/**
 * print_line - This function prints lines in n times
 *
 * @n: This is the parameter passed to this functions argument
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
