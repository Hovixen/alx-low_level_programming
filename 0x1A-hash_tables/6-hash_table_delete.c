#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table and its element
 * @ht: hash table to be deleted
 * Return: returns void
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currNode, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		currNode = ht->array[i];
		while (currNode)
		{
			temp = currNode;
			currNode = currNode->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
