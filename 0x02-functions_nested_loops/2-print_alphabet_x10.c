#include "main.h"

/**
 * print_alphabet_x10 - This prints alphabets 10x using nested loop
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n, j;

	for (j = 0; j < 10; j++)
	{
		for (n = 'a' ; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

}
