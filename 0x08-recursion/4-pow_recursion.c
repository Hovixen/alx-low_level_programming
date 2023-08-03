#include "main.h"

/**
 * _pow_recursion - Functions prints 'x' to the power of 'y'
 *
 * @x: integer 'x'.
 * @y: integer 'y'.
 * Return: returns 'x' to the power of 'y'
 */

int _pow_recursion(int x, int y)
{
	/*base code*/
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
