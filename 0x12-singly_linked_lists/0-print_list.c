#include "list.h"
#include <stdio.h>

/**
 * print_list - a function that prints all elements in a linked list
 * @h: a variable holding the pointer to list_t list for print
 * Return: int
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
