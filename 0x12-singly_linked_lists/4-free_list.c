#include "lists.h"

/**
 * free_list - function frees allocated memory
 * @head: pointer varaible of new node
 * Return: return void
 */
void free_list(list_t *head)
{
	list_t *cur_node;

	while ((cur_node = head) != NULL)
	{
		head = head->next;
		free(cur_node->str);
		free(cur_node);
	}
}
