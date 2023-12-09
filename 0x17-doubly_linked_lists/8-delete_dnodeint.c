#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * INDEX of a dlistint_t linked list.
 * @head: variable holding the head of list
 * @index: variable holding the index of new node
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hdr1;
	dlistint_t *hdr2;
	unsigned int z;

	hdr1 = *head;
	if (hdr1 != NULL)
		while (hdr1->prev != NULL)
			hdr1 = hdr1->prev;
	z = 0;
	while (hdr1 != NULL)
	{
		if (z == index)
		{
			if (z == 0)
			{
				*head = hdr1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hdr2->next = hdr1->next;

				if (hdr1->next != NULL)
					hdr1->next->prev = hdr2;
			}
			free(hdr1);
			return (1);
		}
		hdr2 = hdr1;
		hdr1 = hdr1->next;
		z++;
	}
	return (-1);
}
