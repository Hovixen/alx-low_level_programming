#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of argument passed to it
 *
 * @argc: number of comman line argument passed
 * @argv: array of pointers of command line..
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int n, mul = 1;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			mul *= atoi(argv[n]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
