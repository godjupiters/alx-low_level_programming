#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hashtable
 * @size: variable holding size of array
 * Return: error occurs is NULL else pointer to hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int z;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (z = 0; z < size; z++)
		ht->array[z] = NULL;
	return (ht);
}
