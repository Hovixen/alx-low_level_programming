#include <stdlib.h>
#include "main.h"

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i = 0, m, n = 0, size = 0;
    char **ar = NULL;

    // Count the number of words
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;
        if (str[i] != '\0')
        {
            size++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    }

    if (size == 0)
        return NULL;

    // Allocate memory for the array of pointers
    ar = (char **)malloc(sizeof(char *) * (size + 1));
    if (ar == NULL)
        return NULL;

    // Tokenize the string and allocate memory for each word
    n = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ')
            i++;
        if (str[i] != '\0')
        {
            int w_start = i;
            while (str[i] != '\0' && str[i] != ' ')
                i++;
            int w_len = i - w_start;

            // Allocate memory for the current word
            ar[n] = (char *)malloc(sizeof(char) * (w_len + 1));
            if (ar[n] == NULL)
            {
                for (m = 0; m < n; m++)
                    free(ar[m]);
                free(ar);
                return NULL;
            }

            // Copy characters from the string to the word
            for (m = 0; m < w_len; m++)
                ar[n][m] = str[w_start + m];
            ar[n][w_len] = '\0';
            n++;
        }
    }

    ar[n] = NULL;
    return ar;
}

