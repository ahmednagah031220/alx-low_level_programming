#include "lists.h"

/**
 * add_dnodeint - function to add nodes
 * @n: the new number
 * Return: adderss on success
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;

	if (!(*head))
	{
		new->next = NULL;
		(*head) = new;
	}
	else
	{
		new->next = (*head);
		(*head)->prev = new;
		(*head) = new;
	}

	return (*head);
}
