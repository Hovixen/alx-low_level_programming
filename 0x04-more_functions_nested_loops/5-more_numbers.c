#include "main.h"

/**
 * more_numbers - This function prints integers 0 - 14
 * in 10 different rows
 *
 * Return: void
 */

void more_numbers(void)
{
	char n[] = "01234567891011121314";
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 20 ; j++)
		{
			_putchar(n[j]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
