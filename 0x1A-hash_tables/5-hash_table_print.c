#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash table.
 * @ht: variable holding pointer to hash table.
 * Return: NULL
 *
 * Description: called function that prints hash tables
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int z;
	unsigned char f_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (z = 0; z < ht->size; z++)
	{
		if (ht->array[z] != NULL)
		{
			if (f_flag == 1)
				printf(", ");

			node = ht->array[z];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			f_flag = 1;
		}
	}
	printf("}\n");
}
