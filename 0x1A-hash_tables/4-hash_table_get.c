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
	hash_node_t *temp;

	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (strcmp(temp->key, key) == 0)
					return (temp->value);
				temp = ht->array[i]->next;
			}
		}
	}

	return (NULL);
}
