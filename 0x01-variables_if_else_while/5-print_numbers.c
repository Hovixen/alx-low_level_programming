#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * this code prints the single digits in base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while (i < 10 && i != 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
