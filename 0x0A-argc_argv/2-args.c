#include <stdio.h>
/**
 * main - Prints all the arguments passed
 *
 * @argc: counts the command line argument
 * @argv: pointer of array of command line
 * Return: always 0 success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
