#include <stdio.h>

/**
 * main - This programe prints fizz for multiples of 3
 * and also prints Buzz for multiples of 5
 * and also prints FizzBuzz for multiples of 3 and 5
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
