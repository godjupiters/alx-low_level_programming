#include "lists.h"

/**
 * print_dlistint - a function that prints all dlisting list elements
 * @h: variable holding the head of the list
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int z;

	z = 0;

	if (h == NULL)
		return (z);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		z++;
		h = h->next;
	}
	return (z);
}
