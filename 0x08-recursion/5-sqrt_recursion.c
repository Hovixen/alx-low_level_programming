#include "main.h"
/**
 * _sqrt_recursion_helper - Function that returns the natural root of a number
 *
 * @a: the unknown root number
 * @n: the natural number.
 * Return: the natural root.
 */

int _sqrt_recursion_helper(int n, int a)
{
	/*base case*/
	if ((a * a) == n)/*when it has a natural root*/
	{
		return (a);
	}
	else if ((a * a) > n) /*when it does not have a natural root*/
	{
		return (0);
	}
	return (_sqrt_recursion_helper(n, a + 1));
}
/**
 * _sqrt_recursion - Functions calls the _sqrt_recursion_helper
 *
 * @n: the natural number
 * Return: returns the _sqrt_recursion_helper
 */
int _sqrt_recursion(int n)
{
	/*base case*/
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0));
}
