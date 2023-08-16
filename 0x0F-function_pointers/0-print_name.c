#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function prints a name
 * @name: pointer to the name argument
 * @f: function pointer
 * Return: returns void
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name && f)
		f(name);
}
