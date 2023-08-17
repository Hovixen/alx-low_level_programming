#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function adds integers
 * @a: integer a
 * @b: integer b
 * Return: returns the sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function subtracts integers
 * @a: integer a
 * @b: integer b
 * Return: returns the difference of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplies integers
 * @a: integer a
 * @b: integer b
 * Return: returns the multiple of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function divides integers
 * @a: integer a
 * @b: integer b
 * Return: returns the factor of integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}
/**
 * op_mod - function gets the remainder of integers
 * @a: integer a
 * @b: integer b
 * Return: returns the remainder of integers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
