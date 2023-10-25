#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function for adding new node to linked list
 * @head: a variable holding the double pointer
 * @str: a variable holding the string for new node
 * Return: address or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh;
	list_t *curr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;


	fresh = malloc(sizeof(list_t));
	if (!fresh)
	{
		return (NULL);
	}


	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = NULL;
	if (*head == NULL)
	{
		*head = fresh;
		{
			return (fresh);
		}
	}


	while (curr->next)
		curr = curr->next;


	curr->next = fresh;
	{
	return (fresh);
	}
}
