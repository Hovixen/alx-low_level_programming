#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function concatenates two strings
 *
 * @s1: pointer for string 1
 * @s2: pointer for string 2
 * Return: returns the pointer pointing to a newly allocated space containing
 * s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2; /* count the length of the string */
	char *ar;/* pointer that stores the newly allocated memory */
	unsigned int i, n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ar = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1 ; i++)
	{
		ar[i] = s1[i];
	}
	for (n = 0; n < len2; n++)
	{
		ar[i + n] = s2[n];
	}

	ar[i + n] = '\0';
	return (ar);
}
