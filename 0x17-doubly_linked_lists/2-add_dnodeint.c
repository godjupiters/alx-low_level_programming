#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: head of list
 * @n: variable holding the value of element
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *z;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	z = *head;
	if (z != NULL)
	{
		while (z->prev != NULL)
			z = z->prev;
	}
	new->next = z;
	if (z != NULL)
		z->prev = new;
	*head = new;
	return (new);
}
