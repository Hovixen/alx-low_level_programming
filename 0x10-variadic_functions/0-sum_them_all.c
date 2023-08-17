#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function finds the sum of all argument passed to it
 * @n: unlimited parameters passed.
 * Return: returns the sum of the parameters passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int value, sum = 0;
	va_list in_var; /* declaring the list*/

	if (n == 0)
		return (0);
	va_start(in_var, n); /*referencing the list*/

	for (i = 0; i < n; i++)
	{
		value = va_arg(in_var, int);/*taking the argument for other parameters*/
		sum += value;
	}
	va_end(in_var);/*free the list*/
	return (sum);
}
