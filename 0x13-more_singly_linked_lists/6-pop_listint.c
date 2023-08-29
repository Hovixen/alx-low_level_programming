#include "lists.h"

/**
 * pop_listint - function deletes the head node of a list.
 * @head: pointer to the pointer of the head of the list.
 * Return: returns the data of the head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *subnode;
	int nodeData = 0;

	if (*head == NULL)
		return (0);
	nodeData = (*head)->n;
	subnode = *head;
	*head = (*head)->next;
	/*nodeData = (*head)->n;*/
	free(subnode);
	return (nodeData);
}
