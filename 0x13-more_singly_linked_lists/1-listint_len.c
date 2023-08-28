#include "lists.h"

/**
 * listint_len - function prints the number of elements in
 * a linked list.
 * @h: pointer of the new node.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t inum = 0;

	while (h)
	{
		h = h->next;
		inum++;
	}
	return (inum);
}
