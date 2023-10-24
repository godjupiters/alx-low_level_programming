#include "lists.h"

/**
 * insert_nodeint_at_index - a prototype function that
 * inserts a new node at a given position.
 * @head: a variable holding the double pointer to the start node
 * @idx: variable holding new node
 * @n: variable holding data for new node insertion
 * Return: variable holding pointer, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *future;
	listint_t *current = *head;

	future = malloc(sizeof(listint_t));
	if (future == NULL || head == NULL)
		return (NULL);


	future->n = n;
	future->next = NULL;


	if (idx == 0)
	{
		future->next = *head;
		*head = future;
		return (future);
	}


	for (count = 0; current && count < idx; count++)
	{
		if (count == idx - 1)
		{
			future->next = current->next;
			current->next = future;
			return (future);
		}
		else
			current = current->next;
	}
	return (NULL);
}
