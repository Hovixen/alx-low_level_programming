#include "lists.h"
/**
 * sum_dlistint - function returns the sum of all data(n) in a list
 * @head: pointer to the head of the list
 * Return: returns the sum of all data(n) in a list
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
