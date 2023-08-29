#include "lists.h"

/**
 * sum_listint - Function returns the sum of all data(n) of a list.
 * @head: pointer to the head of the list.
 * Return: returns null when empty or the sum of n.
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *subnode; /*temporary node used to traverse the list*/

	if (head == NULL)
		return (0);
	subnode = head;
	result = subnode->n;
	while (subnode->next != NULL)
	{
		subnode = subnode->next;
		result += subnode->n;
	}
	return (result);
}
