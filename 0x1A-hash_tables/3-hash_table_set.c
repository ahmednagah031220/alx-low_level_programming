#include "hash_tables.h"

/**
 * hash_table_set - function to set the variables in the place
 * @ht: the table used
 * @key: key used to find out the index
 * @value: the value inputed
 * Return: 1 on sucess or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *node2;
	char *new_value;

	if (!ht || key == NULL || value == NULL || ht->array == NULL || ht->size == 0)
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = node->next;
	}

	node2 = make_node(key, value);
	if (node2 == NULL)
	{
		return (0);
	}
	node2->next = node;
	ht->array[idx] = node2;
	return (1);
}

/**
 * make_node - function to make nodes
 * @key: the key used for the node
 * @value: the value used as an input for the node
 * Return: the node on sucess or null
 */
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new;

	if (key == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		return (NULL);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
