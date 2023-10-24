#include "lists.h"

/**
 * print_listint - a prototype function that prints all
 * the elements of a listint_t list.
 * @h: a variable holding the linked list in listint_t for print
 * Return: counter
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
{
	printf("%d\n", h->n);
	counter++;
	h = h->next;
}
return (counter);
}
