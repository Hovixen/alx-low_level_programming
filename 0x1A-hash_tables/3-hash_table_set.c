#include "hash_tables.h"
/**
 * hash_table_set - function adds elements to the hash table
 * @ht: hash table to update or add elements into
 * @key: Key value to be added (must not be empty)
 * @value: value to be paired with the key
 * Return: returns 1 when successful or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx; /* key index */
	hash_node_t *newNode, *currNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	currNode = ht->array[idx];
	while (currNode)
	{
		if (strcmp(currNode->key, key) == 0)
		{
			if (currNode->value)
				free(currNode->value);
			if (value != NULL && *value != '\0')
			{
				currNode->value = strdup(value);
				if (currNode->value == NULL)
					return (0);
			}
			else
				currNode->value = NULL;
			return (1);
		}
		currNode = currNode->next;
	}
/* adding the new node at the beginning of the list */
	newNode = create_newNode(key, value);
	if (newNode == NULL)
		return (0);

	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}

/**
 * create_newNode - function creates and initializes a new hash node
 * @key: The key value to be added
 * @value: value to be paired with the key
 * Return: returns a pointer to newly created hash node or NULL when failed
 */
hash_node_t *create_newNode(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (NULL);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (value != NULL && *value != '\0')
	{
		newNode->value = strdup(value);
		if (newNode->value == NULL)
		{
			free(newNode->key);
			free(newNode);
			return (NULL);
		}
	}
	else
		newNode->value = NULL;

	newNode->next = NULL;

	return (newNode);
}
