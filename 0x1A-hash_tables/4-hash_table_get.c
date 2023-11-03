#include "hash_tables.h"

/**
 * *hash_table_get - function gets the value paired to a key from hash table
 * @ht: hash table created to be searched
 * @key: Key to search for
 * Return: returns a pointer to the value paired to the key or NULL when failed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx; /* to store key index */
	hash_node_t *currNode;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	currNode = ht->array[idx];

	while (currNode)
	{
		if (strcmp(currNode->key, key) == 0)
			return (currNode->value);
		currNode = currNode->next;
	}
	return (NULL);
}
