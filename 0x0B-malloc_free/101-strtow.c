#include <stdlib.h>
#include "main.h"

/**
 * **strtow - function splits strings into words
 * @str: string argument
 * Return: returns pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, m, w_start, w_len;
	int n = 0;/*words index*/
	int size = 0;
	char **ar = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0';)/*count words*/
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != ' ')
		{
			size++;
			while ((str[i] != ' ') && (str[i] != '\0'))
			{
				i++;
			}
		}
	}
	if (size == 0)
		return (NULL);
	ar = (char **)malloc(sizeof(char *) * (size + 1));
	if (ar == NULL)
		return (NULL);
	for (n = 0, i = 0; str[i] != '\0';)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			w_start = i;
			while (str[i] != '\0' && str[i] != ' ')
				i++;
			w_len = i - w_start;
			ar[n] = (char *)malloc(sizeof(char) * (w_len + 1));
			if (ar[n] == NULL)
			{
				for (m = 0; m < n; m++)
					free(ar[m]);
				free(ar);
				return (NULL);
			}
			for (m = 0; m < w_len; m++)
			{
				ar[n][m] = str[w_start + m];
			}
			ar[n][w_len] = '\0';
			n++;
		}
	}
	ar[n] = NULL;
	return (ar);
}
