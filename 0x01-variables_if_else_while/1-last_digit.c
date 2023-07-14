#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * This program shows the last digit of random number and compares it
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* declear and assign the variables */
	int n, L_Digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L_Digit = n  % 10;

	if (L_Digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, L_Digit);
	}
	else if (L_Digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, L_Digit);
	}
	else if (L_Digit < 6 && L_Digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L_Digit);
	}
	return (0);
}
