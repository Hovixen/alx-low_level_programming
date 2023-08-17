#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Function calculates simple operation of integers
 * @argc: pointer to count command argument
 * @argv: pointer to the value of comand argument
 * Return: returns 0 success.
 */
int main(int argc, char *argv[])
{
	int result = 0, a = 0, b = 0;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1] != NULL && argv[2] != NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sign = argv[2];
	if (sign == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = (*get_op_func(sign))(a, b);
	printf("%d\n", result);
	return (0);
}
