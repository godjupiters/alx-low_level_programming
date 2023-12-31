#include "hash_tables.h"

/**
 * hash_table_set - function that add element to hash table.
 * @ht: variable holding pointer to hash table.
 * @key: variable holding key to add.
 * @value: variable holding the value.
 * Return: 0 on failure else 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_dup;
	unsigned long int z, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	z = key_index((const unsigned char *)key, ht->size);
	for (i = z; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dup;
	new->next = ht->array[z];
	ht->array[z] = new;

	return (1);
}
