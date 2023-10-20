#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct lists - a structure holding all the linked single list
 * @str: a variable holding the string
 * @len: a variable holding the length of string
 * @follow: a variable holding the following node
 */

typedef struct lists
{
	char *str;
	unsigned int len;
	struct lists *follow;
} list_table;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
