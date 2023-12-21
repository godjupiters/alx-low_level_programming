#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash table
 * @ht: variable holding pointer to hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *pending;
	unsigned long int z;

	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			node = ht->array[z];
			while (node != NULL)
			{
				pending = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = pending;
			}
		}
	}
	free(head->array);

	free(head);
}
