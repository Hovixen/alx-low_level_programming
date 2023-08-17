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
	char *sign;/**function pointer declaration*/

	/*checks the number of arguments passed*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*checks if it is only one operator sign that was used*/
	if (argv[2][0] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sign = argv[2];
	if ((sign == NULL)) /*|| ((*sign == '/' || *sign == '%') && b == 0))*/
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(sign))(a, b);
	printf("%d\n", result);
	return (0);
}
