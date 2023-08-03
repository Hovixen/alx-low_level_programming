#include "main.h"
/**
 * _strlen_recursion - Function prints the length of a string
 *
 * @s: pointer to the string to be printed
 * Return: returns the length of string
 */
int _strlen_recursion(char *s)
{
	/*base case*/
	if (*s  == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
