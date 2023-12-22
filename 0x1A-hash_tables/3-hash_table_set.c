#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = malloc(sizeof(hash_node_t));

	if (key == NULL)
		return (0);

	if (!temp)
	{
		while (x)
			free(ht->array[--x]);
		free(ht);
		return (0);
	}
	temp->key = strdup(key);
	temp->value = strdup(value);

	if (ht->array[x] == NULL)
	{
		temp->next = NULL;
		ht->array[x] = temp;
	}
	else
	{
		temp->next = ht->array[x];
		ht->array[x] = temp;
	}
	return (1);
}
