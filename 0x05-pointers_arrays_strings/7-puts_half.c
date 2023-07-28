#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
		i = count / 2;
	else
		i = (count + 1) / 2;

	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
