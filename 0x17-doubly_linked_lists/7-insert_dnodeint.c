#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * @h: variable holding head of the list
 * @idx: variable holding the index of the list where the new node
 * should be added. Index starts at 0
 * @n: variable holding the value of new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ini;
	dlistint_t *head;
	unsigned int z;

	ini = NULL;
	if (idx == 0)
		ini = add_dnodeint(h, n);
	else
	{
		head = *h;
		z = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (z == idx)
			{
				if (head->next == NULL)
					ini = add_dnodeint_end(h, n);
				else
				{
					ini = malloc(sizeof(dlistint_t));
					if (ini != NULL)
					{
						ini->n = n;
						ini->next = head->next;
						ini->prev = head;
						head->next->prev = ini;
						head->next = ini;
					}
				}
				break;
			}
			head = head->next;
			z++;
		}
	}
	return (ini);
}
