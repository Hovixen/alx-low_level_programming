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

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 20)
		{
			_putchar(n[j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
