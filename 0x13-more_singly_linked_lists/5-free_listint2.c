#include "lists.h"

/**
 * free_listint2 - Function frees list
 * @head: pointer to the pointer of the head of a node
 * Return: returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *currentNode;

	if (*head == NULL)
		return;
	currentNode = *head;
	while (currentNode != NULL)
	{
		node = currentNode->next;
		free(currentNode);
		currentNode = node;
	}
	*head = NULL;
}
