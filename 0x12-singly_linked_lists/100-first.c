#include "lists.h"

/**
 * __attribute__((constructor)) print_before_main - function
 * prints this code before the main function.
 * Return: returns void
 */

void __attribute__((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
