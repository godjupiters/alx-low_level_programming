#include "lists.h"

/**
 * free_listint2 - a prototype function that frees a listint_t list.
 * @head: a variable holding the double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head =  current;
	}

	*head = NULL;
}
