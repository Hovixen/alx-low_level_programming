#include "hash_tables.h"

/**
 * hash_table_print - function prints the key/value pair of a hash table
 * @ht: hash table to be printed
 * Return: returns void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currNode;
	int commaPrint = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		currNode = ht->array[i];
		while (currNode)
		{
			if (commaPrint == 1)
				printf(", ");

			printf("'%s': '%s'", currNode->key, currNode->value);
			commaPrint = 1;
			currNode = currNode->next;
		}
	}
	printf("}\n");
}
