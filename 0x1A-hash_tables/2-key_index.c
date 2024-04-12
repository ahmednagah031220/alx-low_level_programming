#include "hash_tables.h"

/**
 * key_index - the index where the key and the value will be stored in
 * @key: the key used for a value
 * @size: the size of the table
 * Return: the place of the index on sucess
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
