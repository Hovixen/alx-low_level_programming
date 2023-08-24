#include "lists.h"
/**
 * list_len - function returns the number of nodes(elements) from a structure
 * @h: pointer variable argument to the structure
 * Return: returns the number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;/*count the number of nodes*/

	while (h)
	{
		if (h->str == NULL)
			return (0);
		n++;
		h = h->next;
	}
	return (n);
}
