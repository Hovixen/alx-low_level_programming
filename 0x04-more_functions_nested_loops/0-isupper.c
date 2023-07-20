#include "main.h"

/**
 * _isupper - This checks for uppercase characters
 *
 * @c: This is the defined integer for the function
 *
 * Return: returns 1 when c is uppercase and 0 when c is not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
