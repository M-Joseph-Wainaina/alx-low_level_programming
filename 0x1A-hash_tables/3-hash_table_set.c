#include "hash_tables.h"

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

	if (len(key) == 0)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	temp = malloc(sizeof(hash_node_t *));
	if (temp == NULL)
	{
		return (0);
	}

	temp->key = _stdup(key);

	temp->value = _stdup(value);
	temp->next = ht->array[idx];
	ht->array[idx] = temp;

	return (1);
}
/**
 * len - return the length of a key
 * @key: key
 * Return: length of key
 */

int len(const char *key)
{
	int i;

	i = 0;
	while (key[i])
	{
		i++;
	}
	return (i);
}
/**
 * _stdup - copys content of a string
 * @src: source string
 * Return: copied string address
 */

char *_stdup(const char *src)
{
	int i;
	char *dest;

	dest = malloc(sizeof(char) * (len(src) + 1));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
