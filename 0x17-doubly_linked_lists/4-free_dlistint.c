#include "lists.h"

/**
 * free_dlistint - function that free the list
 * @head: the list to be freed
 * Return: void
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer;

	while (head)
	{
		buffer = head;
		head = head->next;
		free(buffer);
	}
}
