#include <stdlib.h>
#include "main.h"

/**
 * **strtow - function splits strings into words
 * @str: string argument
 * Return: returns pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, w_start, w_len;
	int n = 0;/*iteration by words*/
	int size = 0;
	char **ar;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[n] != '\0')/*count words*/
	{
		if (str[n] != ' ')
		{
			size++;
			while ((str[n] != ' ') && (str[n] != '\0'))
			{
				n++;
			}
		}
		else
			n++;
	}
	ar = (char **)malloc(sizeof(char *) * (size + 1));
	if (ar == NULL)
		return (NULL);
	n = 0;/*reseting n back to 0 and tokenizing the words and length*/
	while (str[n] != '\0')
	{
		if (str[n] == ' ')
			n++;
		w_start = n;
		w_len = 0;
		while (str[n] != '\0' && str[n] != ' ')
		{
			n++;
			w_len++;
		}
		ar[size - size] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (ar[size - size] == NULL)
		{
			for (i = 0; i < size; i++)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
		for (i = 0; i < w_len; i++, w_start++)
		{
			ar[size - size][i] = str[w_start];
		}
		ar[size - size][w_len] = '\0';
		size++;
	}
	ar[size - size] = NULL;
	return (ar);
}
