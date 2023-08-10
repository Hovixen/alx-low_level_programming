#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Function concatenates two strings
 * @s1: string argument passed
 * @s2: string argument passed
 * @n: number of bytes for s2
 * Return: returns pointer to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len2 = 0;
	char *ar = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0' && len2 < n)
		len2++;
	ar = (char *)malloc(sizeof(char) * (len + len2 + 1));
	if (ar == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		ar[len] = s1[len];
		len++;
	}
	len2 = 0;
	while (s2[len2] != '\0' && len2 < n)
	{
		ar[len + len2] = s2[len2];
		len2++;
	}
	ar[len + n] = '\0';
	return (ar);
}
