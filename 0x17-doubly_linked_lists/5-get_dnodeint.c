#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: variable holding pointer head of the list
 * @index: variable holding the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int alloc;
	dlistint_t *ini;

	alloc = 0;
	if (head == NULL)
	return (NULL);

	ini = head;
	while (ini)
	{
	if (index == alloc)
	return (ini);
	alloc++;
	ini = ini->next;
	}
	return (NULL);
}
