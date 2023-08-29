#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes node at index of a linked list.
 * @head: pointer to the pointer of the head of the list.
 * @index: index of the node that should be deleted.
 * Return: returns (1) success or (-1) failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0; /*used to iterate through the index*/
	listint_t *subnode; /*temporary node used to traverse the list*/
	listint_t *nextNode; /*temp node to store the index node to be deleted*/

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		nextNode = *head;
		*head = (*head)->next;
		free(nextNode);
		return (1);
	}
	subnode = *head;

	while (i < (index - 1))
	{
		if (subnode->next == NULL)
			return (-1);
		subnode = subnode->next;
		i++;
	}
	nextNode = subnode->next;
	if (nextNode == NULL)
		return (-1);
	subnode->next = nextNode->next;
	free(nextNode);
	return (1);
}
