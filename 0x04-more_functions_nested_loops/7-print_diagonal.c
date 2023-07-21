#include "main.h"

/**
 * print_diagonal - This function print '\' diagonally
 * using rows and column
 *
 * @n: This is the number of times '\' is drawn
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int j,  k; /*this declears row(j) and column(k)*/

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
