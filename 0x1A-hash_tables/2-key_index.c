#include "hash_tables.h"

/**
 * key_index - generates the array index for the key/value pair
 * @key: string data
 * @size: array size
 * Return: index value
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
