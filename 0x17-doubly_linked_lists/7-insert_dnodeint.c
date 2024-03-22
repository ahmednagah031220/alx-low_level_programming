#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *buffer = *h;

	if (idx == 0)
	{
		return add_dnodeint(h, n);
	}

	for (; idx != 1; idx--)
	{
		buffer = buffer->next;
		if (!(buffer))
		{
			return NULL;
		}
	}
	if (buffer->next == NULL)
	{
		return add_dnodeint_end(h, n);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return NULL;
	}

	new->n = n;
	new->prev = buffer;
	new->next = buffer->next;
	buffer->next->prev = new;
	buffer->next = new;
	return (*h);
}
