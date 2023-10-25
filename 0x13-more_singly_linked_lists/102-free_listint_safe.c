#include "lists.h"

/**
 * free_listint_safe - a prototype function that frees a listint_t list
 * @h: a variable holding the double pointer to the first node in list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int u;
	listint_t *curr;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		u = *h - (*h)->next;
		if (u > 0)
		{
			curr = (*h)->next;
			free(*h);
			*h = curr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
