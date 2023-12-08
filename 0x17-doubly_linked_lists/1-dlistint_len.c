#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: head of list
 * Return: the no of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int z;

	z = 0;

	if (h == NULL)
		return (z);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		z++;
		h = h->next;
	}
	return (z);
}
