#include "lists.h"

/**
 * *insert_nodeint_at_index - function add new node at a given position.
 * @head: pointer to the pointer of the head of the list.
 * @idx: indext in of the list where the new node should be added.
 * @n: integer value to be stored in the node.
 * Return: returns address of the new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 1; /*used to iterate the position of the node*/
	listint_t *subnode; /*temporary node used to traverse the list*/
	listint_t *newNode; /*new node to be added*/

	if (*head == NULL)
		return (NULL);
	subnode = *head;

	while (i < idx)
	{
		if (subnode->next == NULL)
			return (NULL);
		subnode = subnode->next;
		i++;
		/*if (subnode->next == NULL)*/
			/*return (NULL);*/
		/*break;*/
	}
	if (subnode->next == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = subnode->next;
	subnode->next = newNode;
	return (*head);
}
