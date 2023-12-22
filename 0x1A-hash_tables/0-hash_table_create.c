#include "hash_tables.h" 

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = malloc(sizeof(hash_table_t));

    table->size = size;
    table->array = (hash_node_t*)malloc(size);

    return (table);
}