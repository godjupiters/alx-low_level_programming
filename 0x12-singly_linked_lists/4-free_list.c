#include "lists.h"
#include <stdlib.h>


/**
 * free_list - a function that clears linked list
 * @head: a variable that holds list to free
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);

		head = temp;
	}

}
