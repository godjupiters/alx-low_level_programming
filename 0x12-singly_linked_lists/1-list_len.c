#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns numbers of linked list element
 * @h: a variable holding the pointer to list_t list
 * Return: int holding number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	{
	return (count);
	}
}
