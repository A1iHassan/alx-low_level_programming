#include "hash_tables.h"

/**
 * hash_table_print - prints out key/value pairs
 * @ht: hash table to be printed
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (i == ht->size - 1 || temp != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
