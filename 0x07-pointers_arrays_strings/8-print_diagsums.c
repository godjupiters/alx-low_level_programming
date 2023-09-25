#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a prototype function that prints
 * the sum of the two diagonals of a square matrix of integers.
 * @a: variable input 1
 * @size: variable input 2
 * Return: 0 for (Success)
 */

void print_diagsums(int *a, int size)
{
	int cal1, cal2, m;

	cal1 = 0;
	cal2 = 0;

	for (m = 0; m < size; m++)
	{
		cal1 = cal1 + a[m * size + m];
	}
	for (m = size - 1; m >= 0; m--)
	{
		cal2 += a[m * size + (size - m - 1)];
	}
	{
	printf("%d, %d\n", cal1, cal2);
	}
}
