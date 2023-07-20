#include "main.h"

/**
 * print_most_numbers - This function prints numbers 0 to 9
 * but excludes numbers 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char n[] = "01356789";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(n[i]); /*This prints the value of 'n' when 'i' iterates it*/
	}
	_putchar('\n');
}
