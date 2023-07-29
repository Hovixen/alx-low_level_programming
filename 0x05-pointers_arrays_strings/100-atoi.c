#include "main.h"

/**
 * _atoi - Turns integers to string
 * @s: the string mainly to be converted
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int var, sign, n;

	var = 0;
	sign = 1;

	for (n = 0; s[n] != '\0' && !(s[n] >= '0' || s[n] <= '9'); n++)
	{
		if (s[n] == '-')
			sign = sign * -1;
	}
	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] > '0' && s[n] <= '9')
			var = var * 10 + sign * (s[n] - '0');
		if (var != 0 && !(s[n] >= '0' && s[n] <= '9'))
			return (var);
	}
	return (var);

}
