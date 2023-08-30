#include "lists.h"

/**
 * print_listint_safe - function prints the linked list
 * @head: pointer to the head of the list.
 * Return: returns number of nodes in the link
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0; /*used to count the number of nodes*/

	if (head == NULL)
		return (98);
	while (head)
	{
		printf("[%p] %d\n", &head, head->n);
		i++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", &head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (i);
}
