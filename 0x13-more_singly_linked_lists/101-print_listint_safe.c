#include "lists.h"
#include <stdio.h>

size_t loop_listint(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_listint - a function that counts the list via looping
 * @head: a variable holding the pointer to the linked list
 * Return: 0 if Not Looped or return data
 */

size_t loop_listint(const listint_t *head)
{
	const listint_t *reg, *regX;
	size_t count = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	reg = head->next;
	regX = (head->next)->next;

	while (regX)
	{
		if (reg == regX)
		{
			reg = head;
			while (reg != regX)
			{
				count++;
				reg = reg->next;
				regX = regX->next;
			}

			reg = regX->next;
			while (reg != regX)
			{
				count++;
				reg = reg->next;
			}
			return (count);
		}

		reg = reg->next;
		regX = (regX->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a prototype function
 * that prints a listint_t linked list.
 * @head: variable holding the pointer of the linked list.
 * Return: the number of data in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;

	count = loop_listint(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
