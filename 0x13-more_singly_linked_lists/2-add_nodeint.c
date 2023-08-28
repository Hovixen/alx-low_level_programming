#include "lists.h"
/**
 * *add_nodeint - function adds new node at the beginnig of a structure list
 * @head: pointer of the pointer of the head of the list
 * @n: integer parameter of the list
 * Return: returns the address of the new node or NULL when failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
