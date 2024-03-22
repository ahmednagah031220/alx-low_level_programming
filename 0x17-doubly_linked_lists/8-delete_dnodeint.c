#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *buffer = *head;

	if (!(*head))
	{
		return -1;
	}
	for (; i < index; i++)
	{
		buffer = buffer->next;
	}

	if (buffer == *head)
	{
		*head = buffer->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		buffer->prev->next = buffer->next;
		if (buffer->next != NULL)
		{
			buffer->next->prev = buffer->prev;
		}
	}
	free(buffer);
	return (1);
}
