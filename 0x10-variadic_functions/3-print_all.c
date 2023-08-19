#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 ** print_all - Function that prints anything.
 ** @format: list of types of argument passed.
 ** Return: void.
 **/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, separator_indicator = 0, n;
	va_list args;/*initializing the list argument*/
	int i_val /*separator_indicator = 0*/;
	char c;
	char *s_val;
	const char format_str[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		c = format[i];
		n = 0;
		while (format_str[n])
		{
			if ((separator_indicator != 0) && c == format_str[n])
			{
				printf(", ");
				break;
			} n++;
		}
		switch (c)
		{
			case 'c':
				i_val = va_arg(args, int); /*char being promoted to an int*/
				printf("%c", i_val), separator_indicator = 1;
				break;
			case 'i':/*i_val = va_arg(args, int);*/
				printf("%d", va_arg(args, int)), separator_indicator = 1;
				break;
			case 'f':
				/*f_val = va_arg(args, double);*float being promoted to a double*/
				printf("%.6f", va_arg(args, double)), separator_indicator = 1;
				break;
			case 's':
				s_val = va_arg(args, char *), separator_indicator = 1;
				if (!s_val)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s_val); /*separator_indicator = 1;*/
				break;
		}
		/*separator_indicator = 1;*/
		i++;
	} printf("\n"), va_end(args);
}

