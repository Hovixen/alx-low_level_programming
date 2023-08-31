#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to unsigned int
 * @b: string(array) of numbers parameter.
 * Return: returns converted number or 0
 * if there is one or more characters in the string that is not 0 or 1
 * if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i; /*used for iteration*/
	unsigned int result = 0;/*result in decimal*/
	/*unsigned int conv_int;*/

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
