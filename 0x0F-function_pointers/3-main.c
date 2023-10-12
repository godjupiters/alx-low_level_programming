#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - displays the results of a called function.
 * @argc: variable holding the supplied arguments
 * @argv: variable holding the array of pointers to arguments.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int v1, v2;
	char *funcP;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	v1 = atoi(argv[1]);
	funcP = argv[2];
	v2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || funcP[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*funcP == '/' && v2 == 0) ||
	    (*funcP == '%' && v2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(funcP)(v1, v2));
	{
	return (0);
	}
}
