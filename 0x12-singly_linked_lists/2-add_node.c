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
	list_t *fresh;
	unsigned int len = 0;

	while (str[len])
		len++;
	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);
	fresh->str = strdup(str);
	fresh->len = len;
	fresh->next = (*head);
	(*head) = fresh;
	{
	return (*head);
	}
}
