#include "lists.h"

/**
 * free_dlistint - a function the empties dlistint_t list.
 * @head: variable holding the pointer head of the list.
 * Return: 0
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;
	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
