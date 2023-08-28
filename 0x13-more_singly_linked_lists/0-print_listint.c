#include "lists.h"

/**
 * print_listint - function prints all the elements of listinit_t list
 * @h: pointer to the newly created node
 * Return: returns the number of node in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0; /* count the node*/

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
