#include "lists.h"
/**
 * *get_nodeint_at_index - Function returns the nth(position)node of
 * a linked list `listinit_t`.
 * @head: pointer to the head of the list.
 * @index: nth(position) node of the list.
 * Return: returns the nth(position) node of the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0; /*used for iteration*/
	listint_t *subnode; /*temporary node used to traverse the list*/

	if (head == NULL)
		return (NULL);
	subnode = head;

	while (n < index)
	{
		if (subnode == NULL)
			return (NULL);
		subnode = subnode->next;
		n++;
	}
	/*subnode->n = subnode->next;*/
	return (subnode);
}
