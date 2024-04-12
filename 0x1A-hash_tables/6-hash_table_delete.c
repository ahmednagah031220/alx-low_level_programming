#include "hash_tables.h"

/**
 * hash_table_delete - function to free the table
 * @ht: the table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht || ht->size == 0 || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		delete_node(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * delete_node - function to free nodes
 * @node: the node to be deleted
 * Return: void
 */
void delete_node(hash_node_t *node)
{
	hash_node_t *tmp;

	if (node == NULL)
	{
		return;
	}
	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		free(tmp->value);
		free(tmp->key);
		free(tmp);
	}
}
