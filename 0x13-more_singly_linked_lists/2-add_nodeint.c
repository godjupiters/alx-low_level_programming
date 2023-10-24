#include "lists.h"

/**
 * add_nodeint - a prototype function that adds a new
 * node at the beginning of a listint_t list.
 * @head: a variable double pointer for node in the beginning of the list
 * @n: a variable holding the data to be inserted
 * Return: returns the pointer to new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
