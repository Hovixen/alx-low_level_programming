#include "lists.h"
/**
 * *insert_dnodeint_at_index - function inserts new node at a given position
 * @h: pointer to the pointer of the list head
 * @idx: given position
 * @n: data of the node
 * Return: returns the address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr;
	dlistint_t *nodeNew;

	if (h == NULL | idx != 0)
		return (NULL);
	nodeNew = malloc(sizeof(dlistint));
	if (nodeNew == NULL)
		return (NULL);
	nodeNew->n = n;
	nodeNew->prev = NULL;
	nodeNew->next = *h;

	if (*h != NULL)
		(*h)->prev = nodeNew;
	*h = nodeNew;
	return (nodeNew);
}
