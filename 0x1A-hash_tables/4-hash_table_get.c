#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves 
 * a value associated with a key
 *
 * @ht: the hash table
 * @key: the key
 *
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *elem;

	idx = key_index((unsigned char *)key, ht->size);

	elem = ht->array[idx];

	while (elem)
	{
		if (strcmp(key, elem->key) == 0)
		{
			return (elem->value);
		}
		elem = elem->next;
	}
	return (NULL);
}
