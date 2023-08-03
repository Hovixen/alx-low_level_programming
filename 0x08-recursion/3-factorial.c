#include "main.h"
/**
 * factorial - Function prints the factorial of a given number.
 *
 * @n: pointer of the given integer
 * Return: the factorial of the given number
 */

int factorial(int n)
{
	/*base case*/
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	/*recursion case*/
	return (n * factorial(n-1));
}
