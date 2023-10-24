#include "lists.h"

/**
 * delete_nodeint_at_index - a prototype function that deletes
 * the node at index index of a listint_t linked list.
 * @head: variable holding double pointer to the first element
 * @index: variable holdiing the index for deletion
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *new = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}


	while (count < index - 1)
	{
		if (curr == NULL || curr->next == NULL)
			return (-1);
		curr = curr->next;
		count++;
	}

	new = curr->next;
	curr->next = new->next;
	free(new);

	return (1);
}
