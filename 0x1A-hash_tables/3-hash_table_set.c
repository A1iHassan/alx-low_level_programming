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
	hash_node_t *temp;

	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0)
		return (0);

	temp = ht->array[x];
	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->key);
				temp->key = strdup(key);
				if (temp->key == NULL)
				{
					free(temp->key);
					free(temp->value);
					free(temp);
					return (0);
				}
				return (1);
			}
			temp = temp->next;
		}
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[x];
	ht->array[x] = temp;
	return (1);
}
