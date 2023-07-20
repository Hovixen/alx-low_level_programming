#include "main.h"

/**
 * _isdigit - This program checks for digit from 0 to 9
 *
 * @c: This is the integer used
 *
 * Return: returns 1 c is a digit else returns 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
