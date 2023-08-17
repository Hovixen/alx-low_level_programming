#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Function calculates simple operation of integers
 * @argc: pointer to count command argument
 * @argv: pointer to the value of comand argument
 * Return: returns 0 success.
 */
int main(int argc, char *argv[])
{
int a;
int b;
int result;
char operand;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
return (99);
}
operand = *argv[2];
if ((operand == '/' || operand == '%') && b == 0)
{
printf("Error\n");
return (100);
}
result = f(a, b);
printf("%d\n", result);
return (0);
}
