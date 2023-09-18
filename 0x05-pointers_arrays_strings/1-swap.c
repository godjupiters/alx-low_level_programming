#include "main.h"

/*
 * swap_int - a prototype function that swaps
 * the values of two integers
 * @a: pointer variable 1
 * @b: pointer variable 2
 * Return: a, b
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
