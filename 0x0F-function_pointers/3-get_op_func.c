#include <string.h>
#include "3-calc.h"

/**
 * *get_op_func - function selects correct function to perform the operation
 * asked by the user
 *
 * @s: character argument passed
 * Return: returns a pointer to the function that corresponds to the
 * operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;/* for iteration*/

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			break;
		i++;
	}
	return (ops[i].f);
}
