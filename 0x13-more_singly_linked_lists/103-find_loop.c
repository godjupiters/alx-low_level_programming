#include "lists.h"

/**
 * find_listint_loop - a prototype function that finds
 * the loop in a linked list.
 * @head: variable holding the linked list
 * Return: variable holding address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *reg = head;
	listint_t *regX = head;

	if (head == NULL)
		return (NULL);

	while (reg && regX && regX->next)
	{
		regX = regX->next->next;
		reg = reg->next;

		if (regX == reg)
		{
			reg = head;
			while (reg != regX)
			{
				reg = reg->next;
				regX = regX->next;
			}
			return (regX);
		}
	}
	return (NULL);
}
