#include "lists.h"

/**
 * print_list - Funciton prints all element of a list_t list.
 * @h: pointer to the node list
 * Return: returns the count of the node made from the list_t.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;/*iteration to count the number of nodes*/

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
