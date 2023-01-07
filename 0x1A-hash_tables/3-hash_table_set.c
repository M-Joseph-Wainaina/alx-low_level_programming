#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function to add and element in a hash table
 * @ht: pointer to struct hsh table
 * @key: index to be stored
 * @value: value stored in the bucket
 * Return: 1 on success and 0 on otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}

	idx = key_index((unsigned char *)key, ht->size);

	temp = malloc(sizeof(hash_node_t *));
	if (temp == NULL)
	{
		return (0);
	}

	temp->key = strdup(key);

	temp->value = strdup(value);
	temp->next = ht->array[idx];
	ht->array[idx] = temp;

	return (1);
}
