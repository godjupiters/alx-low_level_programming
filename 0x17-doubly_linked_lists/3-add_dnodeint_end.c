#include "lists.h"

/**
 * add_dnodeint_end - a function that adds new node at end
 * of a dlistint_t list
 * @head: variable holding the head of the list
 * @n: variable holding the value of the element
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *z;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	z = *head;
	if (z != NULL)
	{
		while (z->next != NULL)
			z = z->next;
		z->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = z;
	return (new);
}
