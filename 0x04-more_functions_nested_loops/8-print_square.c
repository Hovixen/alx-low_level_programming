#include "main.h"

/**
 * print_square - This function prints the squares of a given size
 *
 * @size: This is the size of the square (#)
 *
 * Return: void
 */

void print_square(int size)
{
	int j, k; /*declears the row (j) and column (k)*/

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
