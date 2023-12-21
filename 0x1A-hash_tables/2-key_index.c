#include "hash_tables.h"

/**
 * key_index - function to get index of each value & then store in hash table.
 * @key: variable holding the key to get index
 * @size: variable holding the size of array of hash table.
 * Return: index of key
 *
 * Description: uses the function djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
