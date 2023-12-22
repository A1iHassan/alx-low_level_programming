#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    if (ht == NULL || ht->array == NULL || ht->size == 0)
    {
        printf("{}\n");
        return;
    }
}