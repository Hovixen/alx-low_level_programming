#include "lists.h"

/**
 * *add_node - Function adds a new node at the begining of the list
 * @head: pointer of the new node
 * @str: string member of the structure
 * Return: returns the address of the new element of Null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;

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
	node1->next = *head;
	*head = node1;
	return (node1);
}
