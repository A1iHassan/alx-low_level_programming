#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value by its key
 * @ht: hash table
 * @key: key to be looked up
 * Return: value if found or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->key);
		}
	}

	return (NULL);
}
