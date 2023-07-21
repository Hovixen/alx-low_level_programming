#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: the defined size
 * Return: void.
 */
void print_triangle(int size)
{
	int n, j;

	for (n = 0; n < size; n++)
	{
 /**
 * The first inner loop ends by giving j the value of j++
 * i.e if j++ is 2 by the end of the control
 * then the value of j would be 2 for the next control
 * where i is still the value of the row
 */
		for (j = 1; j < (size - n); j++)
		{
			_putchar(' ');
		}
	/**
	 * the second inner loop starts with the value of
	 * j++ from the first loop control
	 */
		for (j--; j < size; j++)
		{
			_putchar('#');
		}
		if (n < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
