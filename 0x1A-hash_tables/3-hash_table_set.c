#include "hash_tables.h"

/**
 * hash_table_set - inserts a new table cell
 * @ht: hash table
 * @key: key to be set or updated
 * @value: value
 * Return: 1 or 0
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = malloc(sizeof(hash_node_t));

	if (key == NULL)
	{
		free(temp);
		return (0);
	}

	if (strcmp(ht->array[x]->key, key) == 0)
	{
		ht->array[x]->value = strdup(value);
		free(temp);
		return (1);
	}

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
