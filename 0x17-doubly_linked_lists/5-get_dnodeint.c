#include "lists.h"
/**
 * *get_dnodeint_at_index - function returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: nth position of the node
 * Return: returns the node at the nth position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int countNode = 0;

	while (head != NULL && countNode < index)
	{
		head = head->next;
		countNode++;
	}
	if (countNode == index)
	{
		return (head);
	}
	else
		return (NULL);
}
