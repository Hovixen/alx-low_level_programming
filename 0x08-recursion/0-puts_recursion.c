#include "main.h"

/**
 * _puts_recursion - Function that writes a string followed by a new line
 *
 * @s: The input character
 * Return: returns void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /*base condition*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
