#include "lists.h"

/**
 * *add_nodeint_end - Function adds new node at the end of a singly list.
 * @head: pointer to the pointer of the head of the list.
 * @n: integer member of the list
 * Return: returns the adderess of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currentNode;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		currentNode = *head;
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = node;
	}
	return (node);
}
