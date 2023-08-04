#include <stdio.h>
/**
 * main - prints the number of argument passed to it
 *
 * @argc: number of comman line argument passed
 * @argv: array of pointers of command line..
 * Return: always 0 success
 */

int main(int argc , char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
