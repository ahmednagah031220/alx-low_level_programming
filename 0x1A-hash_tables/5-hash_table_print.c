#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 * @ht: the table of the hashs
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;
	int print = 0;

	if (!ht || !ht->array)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (print == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			print = 1;
		}
	}
	printf("}\n");
}
