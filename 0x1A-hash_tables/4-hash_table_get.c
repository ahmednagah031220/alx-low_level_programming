#include "hash_tables.h"

/**
 * hash_table_get - function to get the value of the key
 * @ht: the table of the hash
 * @key: the key used to store the value
 * Return: value on sucess and null on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || key == NULL || ht->array == NULL || ht->size == 0 ||
			strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
