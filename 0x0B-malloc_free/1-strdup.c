#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Function returns a copy of string given as parameter
 *
 * @str: string parameter argument
 * Return: returns the pointer array to newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *sr;
	int n = 0; /*initializes the count for the string*/
	int i;

	if (str == NULL)
		return (0);
	while (*(str + n) != '\0')
	{
		n++;
	}
	n++;/* Adds the null terminator */
	sr = (char *)malloc(sizeof(char) * n);
	if (sr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n ; i++)
	{
		sr[i] = str[i];
	}
	return (sr);
}
