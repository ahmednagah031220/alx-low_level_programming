#include "lists.h"

/**
 * print_dlistint - function to print doubly linked lists
 * @h: list
 * Return: the lenght of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
	{
		return count;
	}

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return count;
}
