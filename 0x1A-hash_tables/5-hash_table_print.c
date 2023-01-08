#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *elem;
	char *str;

	if (ht == NULL)
	{
		return;
	}

	str = malloc(sizeof(char));
	str[0] = '\0';

	strcat(str, "{");

	for(idx = 0; idx < ht->size; idx++)
	{
		elem = ht->array[idx];
		if (elem == NULL)
		{
			continue;
		}
	
		do 
		{
			strcat(str, quote(elem->key));
			strcat(str, ": ");
			strcat(str, quote(elem->value));
			strcat(str, ", ");
			elem = elem->next;
		} while (elem);

	}
	str[strlen(str) - 2] = '\0';
	strcat(str, "}");

	printf("%s\n", str);
}

char *quote(char *str)
{
	char *ret;

	ret = malloc(sizeof(char) * 2);
	ret[0] = '\'';
	ret[1] = '\0';

	strcat(ret, str);
	strcat(ret, "'");
	
	return (ret);
}
	


