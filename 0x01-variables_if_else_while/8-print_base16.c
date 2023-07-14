#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * this code prints all the numbers of base 16 in lowercase using putchar only
 * Return: always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 9 ; n++)
		putchar('0' + n);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
