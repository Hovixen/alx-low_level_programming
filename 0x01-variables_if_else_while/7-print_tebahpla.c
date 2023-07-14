#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints alphabets in reverse usng putchar
 * Return: always 0 (successs)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
