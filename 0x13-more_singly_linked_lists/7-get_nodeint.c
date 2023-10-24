#include "lists.h"

/**
 * get_nodeint_at_index - a prototype function that returns
 * the nth node of a listint_t linked list.
 * @head: variable holding the pointer of the first node
 * @index: variable holding the index of the node
 * Return: pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current != NULL ? current : NULL);
}
