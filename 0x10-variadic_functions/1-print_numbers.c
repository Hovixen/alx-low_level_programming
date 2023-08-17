#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers follow by a new line
 * @separator: pointer variable (string) to be printed between numbers
 * @n: argument parameter passed
 * Return: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list num;/*declaring list for num*/

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(num, int);/*get next argument of type int*/
		printf("%d", value);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
