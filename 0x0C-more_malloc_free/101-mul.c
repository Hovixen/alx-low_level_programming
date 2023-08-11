#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function checkes for digits.
 * @val: command argument passed.
 * Return: returns (1) when true and (0) when false.
 */
int _isdigit(char *val)
{
	int i = 0;

	while (val[i] != '\0')
	{
		if (val[i] < '0' || val[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * mul - function multiplies pointers
 * @a: pointer argument
 * @b: pointer argument
 * Return: returns integer
 */
int mul(char *a, char *b)
{
	int mul_value = 0;

	mul_value = atoi(a) * atoi(b);
	return (mul_value);
}
/**
 * main - multiplies two numbers
 * @argc: number of comman line argument passed
 * @argv: pointer of array of the command passed
 * Return: always 0 success.
 */
int main(int argc, char  *argv[])
{
	int ab = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(_isdigit(argv[1]) && _isdigit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	ab = mul(argv[1], argv[2]);
	printf("%d\n", ab);
	return (0);
}
