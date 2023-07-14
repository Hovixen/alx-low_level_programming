#include <stdio.h>
/**
 * main - Entry point
 * This code prints the alphabets a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
		putchar(alph[n]);
	putchar('\n');
	return (0);
}
