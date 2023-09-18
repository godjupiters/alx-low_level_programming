#include "main.h"
/**
 * print_array - prototype function that prints
 * n elements of an array of integers,
 * followed by a new line.
 *
 * @a: pointer address
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int o;

	for (o = 0; o < (n - 1); a[o];)
	{
		printf("%d, ", a[o]);
	}
	if (o == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
