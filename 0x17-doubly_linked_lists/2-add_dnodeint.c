#include "lists.h"
/**
 * *add_dnodeint - function adds new node at the beginning of a list
 * @head: pointer to the head pointer of the list
 * @n: data to be inputed to the list
 * Return: returns address of the new element or NULL when failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodeNew;
	nodeNew = malloc(sizeof(dlistint_t));

	if (nodeNew == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	nodeNew->n = n;
	nodeNew->prev = NULL;
	nodeNew->next = *head;

	if (nodeNew->prev != NULL)
	{
		(*head)->prev = nodeNew;
	}
	*head = nodeNew;
	
	return (nodeNew);
}
