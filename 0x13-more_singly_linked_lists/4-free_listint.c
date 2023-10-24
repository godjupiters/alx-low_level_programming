#include "lists.h"

/**
 * free_listint - a prototype function that frees a listint_t list
 * @head: a variable holding the pointer to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *present = head;
	listint_t *future;

	while (present != NULL)
	{
		future = present->next;
		free(present);
		present = future;
	}
}
