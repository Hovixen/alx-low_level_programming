#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints string
 * @separator: character separator constant
 * @n: number of argument passed
 * Return: returns void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ar; /*character (string) value*/
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		ar = va_arg(num, char *);/*get the next parameter value*/
		if (ar == NULL)
			printf("nill");
		printf("%s", ar);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
