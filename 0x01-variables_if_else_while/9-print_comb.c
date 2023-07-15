#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints single numbers with possible combination
 * Return: answer 0 (success)
 */
int main(void)
{
	int n;

	while (n < 10)
	{
		putchar ('0' + n);
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
