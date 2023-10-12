#include "lists.h"
/**
 * dlistint_len - function returns the number of element in a linked list
 * @h: constant pointer to the list head
 * Return: returns the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
