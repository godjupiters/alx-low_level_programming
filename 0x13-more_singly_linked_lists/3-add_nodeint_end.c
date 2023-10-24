#include "lists.h"

/**
 * add_nodeint_end - a prototype function that adds a new node
 * at the end of a listint_t list.
 * @head: a variable double pointer to first element in listint_t
 * @n: a variable holding data to insert in element
 * Return: new_node, or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	return (new_node);
}
