#include "lists.h"

/**
 * listinit_len - functions prints the number of element
 * in a linked list
 * @h: pointer to the new node created
 * Return: returns the number of node in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
