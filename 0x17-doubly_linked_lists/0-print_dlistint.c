#include "lists.h"
/**
 * print_dlistint - function prints all the element of a list
 * @h: constant pointer to list
 * Return: returns the number of node in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t countNode = 0;

	if (h == NULL)
		return (countNode);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		countNode++;
	}
	while (h && h->prev)
	{
		h = h->prev;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (countNode);
}
