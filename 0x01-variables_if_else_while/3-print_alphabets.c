#include <stdio.h>

/**
 * main - Entry point
 * This program prints alphabets in upper and lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (n = 0; n < 52; n++)
	{
		putchar(alph[n]);
	}
	putchar('\n');
	return (0);

}
