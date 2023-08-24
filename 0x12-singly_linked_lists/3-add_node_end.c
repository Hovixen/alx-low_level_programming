#include "lists.h"

/**
 * *add_node_end - Function adds node at the end of list_t list
 * @head: pointer to the new node ceated
 * @str: string element of the structure
 * Return: returns the address of the node or Null when failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1;/*pointer of the new node*/
	list_t *cur_node;/*pointer of the current node*/

	if (str == NULL)
		return (0);
	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
		return (0);
	node1->str = strdup(str);
	if (str == NULL)
	{
		free(node1);
		return (0);
	}
	node1->len = strlen(str);
	node1->next = NULL;

	if (*head == NULL)
	{
		*head = node1;
	}
	else
	{
		cur_node = *head;
		while (cur_node->next != NULL)
			cur_node = cur_node->next;
		cur_node->next = node1;
	}
	return (node1);
}
