#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument array value
 * Return: always (0) success.
 */

int main(int argc, char *argv[])
{
	int n = 0; /* this is used to start the iteration*/

	for (; n < argc ; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
