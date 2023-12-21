#include "hash_tables.h"

/**
 * hash_table_get - function that calls value in a key in a hash table.
 * @ht: variable holding pointer to hash table.
 * @key: variable holding key to get value
 * Return: NULL if unmatched else key in ht
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int z;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	z = key_index((const unsigned char *)key, ht->size);
	if (z >= ht->size)
		return (NULL);
	node = ht->array[z];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
