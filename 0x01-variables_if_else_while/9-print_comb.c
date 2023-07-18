#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints single numbers with possible combination
 * Return: answer 0 (success)
 */
int main(void)
{

	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}
