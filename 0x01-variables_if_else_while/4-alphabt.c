#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * This code prints all alphapbet except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, q;

	e = 'e';
	q = 'q';

	for (i = 'a'; i < 'z'; i++)
	{
		if (i != e && i != q)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
