#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 * @size: Size of the array in the given struct
 * Return: returns pointer to the new hash table or NULL when failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);

	/* allocate memory to the array hash_node_t */
	/* This hash_node_t array is in the struct hash_table_t */
	newTable->array = malloc(sizeof(hash_table_t) * size);
	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		newTable->array[i] = NULL;
	}
	newTable->size = size;

	return (newTable);
}
