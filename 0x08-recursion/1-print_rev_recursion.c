#include "main.h"
/**
 * _print_rev_recursion - Function prints a string in reverse
 *
 * @s: pionter string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
