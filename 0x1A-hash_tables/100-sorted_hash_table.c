#include "hash_tables.h"

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_node_t *) * size);
	unsigned long int i;

	if (!table)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	
	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x = key_index((const unsigned char *)key, ht->size);
	shash_node_t *temp = ht->array[x], *new;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = srdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(shash_node_t *));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[x] == NULL)
	{
		new->next = NULL;
		new->snext = NULL;
		new->sprev = NULL;
		ht->array = new;
		return (1);
	}
	temp = ht->array[x];

}

char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht); 
void shash_table_delete(shash_table_t *ht);
int sorted(shash_node_t *list_node, shash_node_t *new_node)
{
	shash_node_t *temp = list_node;
	int i;

	if (temp == NULL)
		return (0);
	if (new_node->value < temp->value)
	{
		if (temp->sprev && new_node->value >= temp->sprev->value)
		{
			new_node->snext = temp;
			new_node->sprev = temp->sprev;
			temp->sprev->snext = new_node;
			temp->sprev = new_node;
			return (1);
		}
		else
		{
			i = sorted(temp->sprev->sprev, new_node);
			if (i == 1)
				return (1);
			else
			{
				
			}
		}
	}
	else if (new_node->value > temp->value)
	{
		if (temp->snext && new_node->value <= temp->snext->value)
		{
			new_node->snext = temp->snext;
			new_node->sprev = temp;
			temp->snext->sprev = new_node;
			temp->snext = new_node;
			return (2);
		}
	}
}