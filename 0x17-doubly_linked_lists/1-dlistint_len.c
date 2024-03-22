#include "lists.h"

/**
 * dlistint_len - function to find the lenght of the list
 * @h: list
 * Return: count on sucess;
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
