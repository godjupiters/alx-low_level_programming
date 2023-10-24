#include "lists.h"

/**
 * listint_len - a prototype function that returns the
 * number of elements in a linked listint_t list.
 * @h: a variable holding the values of linked list of listint_t
 * Return: counter
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h = h->next)
	{
		counter++;
	}
	{
		return (counter);
	}
}
