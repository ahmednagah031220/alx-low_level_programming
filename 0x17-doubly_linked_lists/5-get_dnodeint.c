#include "lists.h"

/**
 * get_dnodeint_at_index - function to find the index in a list
 * @head: the list
 * @index: index of the node
 * Return: the node on success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}

	for(; i < index; i++)
	{
		if (!head->next)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
