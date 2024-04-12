#include "hash_tables.h"

/**
 * hash_table_create - fucntion that creates a hash table
 * @size: the size of the hash table
 * Return: the hash table on sucess or NULL in failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (!new_table)
	{
		return (NULL);
	}
	new_table->size = size;
	new_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return (new_table);
}
