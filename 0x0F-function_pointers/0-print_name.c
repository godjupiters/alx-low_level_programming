#include "func_head.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: variable holding string to be added
 * @f: variable holding the pointer function
 * Return: return VOID
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
