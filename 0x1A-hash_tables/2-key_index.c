#include "hash_tables.h"

/**
 * key_index - function gives the index of a key
 * @key: The key to be hashed
 * @size: This is the size of the hash table array
 * Return: returns index at which the key is stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
