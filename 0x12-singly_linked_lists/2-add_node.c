#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds node at beginning
 * @head: a variable holding double pointer
 * @str: a variable holding the string
 * Return: address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	{
	return (*head);
	}
}
