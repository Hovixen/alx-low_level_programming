#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != 0)
	{
		length++;
	}

	for (i = 0; i < length ; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
