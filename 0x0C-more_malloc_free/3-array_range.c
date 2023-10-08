#include <stdlib.h>
#include "main.h"

/**
 * *array_range -  a function that creates an array of integers
 * @min: a variable holding the minimum range of values
 * @max: a variable holding the maximum range of values & no. of elements
 * Return: pointer is returned
 */

int *array_range(int min, int max)
{
	int *pointer;
	int n, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (n = 0; min <= max; n++)
	{
		pointer[n] = min++;
	}
	{
	return (pointer);
	}
}
