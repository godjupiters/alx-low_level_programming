#include "main.h"

/**
 * reverse_array - prototype function that reverses
 * the content of an array of integers.
 * Where n is the number of elements of the array
 *
 * @a: 1st variable to compare
 * @n: 2nd variable to compare
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int o;
	int p;

	for (o = 0; o < n--; o++)
	{
		p = a[o];
		a[o] = a[n];
		a[n] = p;
	}
}
