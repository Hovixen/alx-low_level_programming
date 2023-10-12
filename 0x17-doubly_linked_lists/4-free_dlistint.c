#include "lists.h"
/**
 * free_dlistint - function frees a dlistint list
 * @head: pointer to the head of the list
 * Return: returns void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
