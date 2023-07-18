#include "main.h"

/**
 * main - Entry point of the code now.
 * this program prints an array of strings
 * Return: Always 0 (Success)
 */
int main(void)
{
	char git[7] = {"_putchar"};
	int n;

	for (n = 0; n <= 7; n++)
	{
		_putchar(git[n]);
	}
	_putchar('\n');
	return (0);
}
