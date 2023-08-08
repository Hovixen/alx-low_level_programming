#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - Function concatenates arguments passed in command
 *
 * @ac: integer count of command
 * @av: pointer of array of string command
 * Return: return pointer
 */

char *argstostr(int ac, char **av)
{
	int len = 0;/* used to find the size of memory*/
	int i;/*used to iterate through the loop*/
	int new = 0;/*used to iterate through the pointer to the allocated memory*/
	char *ar;/*pointer to array argument*/
	char *str;/*pointer to the allocated memory*/

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*loop through to get the size*/
	for (i = 0; i < ac; i++)
	{
		ar = av[i];
		while (*ar != '\0')
		{
			len++;
			ar++;
		}
		len++;/*include a new line*/
	}
	/*allocate memory and to allocate null terminator*/
	str = (char *)malloc(sizeof(char *) * (len + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	/*copying to allocated memory with new lines*/
	for (i = 0; i < ac; i++)
	{
		ar = av[i];
		while (*ar != '\0')
		{
			str[new] = *ar;
			new++;
			ar++;
		}
		str[new] = '\n';
		new++;
	}
	str[new] = '\0';
	return (str);
}
