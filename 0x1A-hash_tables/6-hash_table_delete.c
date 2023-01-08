#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *elem;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return;
	}

	for (idx = 0; idx < ht->size; idx++)
	{
		elem = ht->array[idx];
		if (elem == NULL)
		{
			continue;
		}
		do {
			temp = elem;
			free(elem->value);
			free(elem->key);
			elem = elem->next;
			free(temp);
		} while (elem);
	}
	free(ht->array);
	free(ht);
}


