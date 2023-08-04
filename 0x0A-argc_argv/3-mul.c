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
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
