#include "lists.h"

/**
 * sum_dlistint - function to sum nodes
 * @head: the list
 * Return: sum on success or 0
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
