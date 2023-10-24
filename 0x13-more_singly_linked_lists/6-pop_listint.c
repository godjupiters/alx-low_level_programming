#include "lists.h"

/**
 * pop_listint - a prototype function that deletes
 * the head node of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head: a variable holding the double pointer to the first element
 * Return: integer from the deleted list or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int load;

	if (head == NULL || *head == NULL)
		return (0);

	load = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (load);
}
