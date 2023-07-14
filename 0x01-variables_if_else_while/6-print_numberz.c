#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints single digit using putchar
 * Return: Answer 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		/* put char is used here to print ancii */
		putchar('0' + a);
	}
	putchar('\n');
	return (0);
}
