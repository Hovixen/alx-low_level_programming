#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;
	
	ht = malloc(sizeof(shash_table_t));
	
	if (ht == NULL)
		return (NULL);
	
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - Add a key-value pair to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	
	new_node = malloc(sizeof(shash_node_t));
	
	if (new_node == NULL)
		return (0);
	
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	
	new_node->sprev = NULL;
	new_node->snext = NULL;
	
	current = ht->shead;
	if (current == NULL || strcmp(key, current->key) < 0)
	{
		new_node->next = current;
		ht->shead = new_node;
		if (current)
			current->sprev = new_node;
		else
			ht->stail = new_node;
	}
	else
	{
		while (current->next != NULL && strcmp(key, current->next->key) > 0)
			current = current->next;
		new_node->next = current->next;
		current->next = new_node;
		if (new_node->next)
			new_node->next->sprev = new_node;
		else
			ht->stail = new_node;
		new_node->sprev = current;
	}
	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with a key
 * @ht: The sorted hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	
	current = ht->shead;
	
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);
		current = current->next;
	}
	
	return (NULL);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	
	if (ht == NULL)
		return;
	
	current = ht->shead;
	
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->next;
		
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	
	if (ht == NULL)
		return;
	
	current = ht->stail;
	
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;
	
	if (ht == NULL)
		return;
	
	current = ht->shead;
	
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	
	free(ht->array);
	free(ht);
}
