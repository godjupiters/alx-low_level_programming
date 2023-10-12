#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - a function that selections the func to execute
 * @s: variable holding the argument.
 * Return: function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int cnt = 0;

	while (ops[cnt].op != NULL && *(ops[cnt].op) != *s)
		cnt++;
	{
	return (ops[cnt].f);
	}
}
