#include "lists.h"

/**
 * reverse_listint - a prototype function that
 * reverses a listint_t linked list.
 * @head: a variable holding double pointer to the first node
 * Return: a pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pass = NULL;
	listint_t *fu = NULL;

	while (*head != NULL)
	{
		fu = (*head)->next;
		(*head)->next = pass;
		pass = *head;
		*head = fu;
	}

	*head = pass;

	return (*head);
}
