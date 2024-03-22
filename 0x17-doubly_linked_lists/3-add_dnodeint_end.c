#include "lists.h"

/**
 * add_dnodeint_end - function to add in the end
 * @n: the number to be added
 * Return: the address on sucess or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *buffer = *head;

	if (!new || !head)
	{
		return (NULL);
	}

	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		new->prev = NULL;
		(*head) = new;
	}
	else
	{
		while(buffer->next)
		{
			buffer = buffer->next;
		}
		buffer->next = new;
		new->prev = buffer;
	}

	return (*head);
}
