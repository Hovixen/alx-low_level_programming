#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the number of argument passed to it
 *
 * @argc: number of comman line argument passed
 * @argv: array of pointers of command line..
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	int n;/*count of the command line*/
	int i;/*count of the array length*/
	int sum = 0;
	int val = 0;
/*condition to check if the argument is equal to 1*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

/*check all the digits in the argv array if they are digits*/
	for (n = 1; n < argc; n++)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			if (!isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		val = atoi(argv[n]);
		sum += val;
	}
	printf("%d\n", sum);
	return (0);
}
