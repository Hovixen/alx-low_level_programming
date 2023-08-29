#include "lists.h"

/**
 * free_listint - function frees the list
 * @head: pointer of the head of the list
 * Return: returns void.
 */

void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while ((currentNode = head) != NULL)
	{
		head = head->next;
		free(currentNode);
	}
}
