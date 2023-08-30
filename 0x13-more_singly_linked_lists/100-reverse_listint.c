#include "lists.h"

/**
 * *reverse_listint - Function reverses a linked list.
 * @head: pointer to the pointer of the head of the list.
 * Return: returns a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curNode, *nextNode; /*pointer to the current and next node*/

	curNode = NULL;
	if (*head == NULL)
		return (*head);
	nextNode = *head;

	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		(*head)->next = curNode;
		curNode = *head;
		*head = nextNode;
	}
	*head = curNode;
	return (*head);
}
