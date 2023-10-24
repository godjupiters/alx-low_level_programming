#include "lists.h"

/**
 * sum_listint - a prototype function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: variable holding the pointer of the first node in the list linked
 * Return: total
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	return (total);
}
