#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - This determines whether an integer
 * is positve or negative
 *
 * @i: This is the integer used
 *
 * Return: 1 if positive and  0 if negative
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d\n", i);
	}
	else if (i == 0)
	{
		printf("%d\n", i);
	}
	else if (i > 0)
	{
		printf("%d\n", i);
	}
}
