#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
 * *_strcpy - function copyies strings from src to dest
 * @dest: destinaton pointer
 * @src: source pointer
 * Return: returns the pointer to the destination array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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
	char *ar1; /*pointer for memory allocation*/
	char *ar2; /*pointer for memory allocation*/

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	ar1 = (char *)malloc(strlen(argv[1]) + 1);
	ar2 = (char *)malloc(strlen(argv[2]) + 1);
	if (ar1 == NULL || ar2 == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}
	_strcpy(ar1, argv[1]);
	_strcpy(ar2, argv[2]);
	if (!(_isdigit(ar1) && _isdigit(ar2)))
	{
		printf("Error\n");
		exit(98);
	}
	ab = mul(argv[1], argv[2]);
	printf("%d\n", ab);
	free(ar1);
	free(ar2);
	return (0);
}
