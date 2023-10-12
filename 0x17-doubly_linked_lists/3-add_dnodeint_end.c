#include "lists.h"
/**
 * *add_dnodeint_end - function adds new node at the end of a list
 * @head: pointer to the list head pointer
 * @n: data to be inputed to the list
 * Return: returns the address of the new node or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodeNew;
	dlistint_t *curr;

	nodeNew = malloc(sizeof(dlistint_t));
	if (nodeNew == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	nodeNew->n = n;
	nodeNew->next = NULL;

	if (*head == NULL)
	{
		nodeNew->prev = NULL;
		*head = nodeNew;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = nodeNew;
		nodeNew->prev = curr;
	}
	return (nodeNew);
}
