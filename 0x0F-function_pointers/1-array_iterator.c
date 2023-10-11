#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * where size is the size of the array
 * and action is a pointer to the function you need to use
 * @array: represents the array in use
 * @size: variable holding the no. of elements to be printed
 * @action: variable pointer to print regular else hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cnt;

	if (array == NULL || action == NULL)
		return;

	for (cnt = 0; cnt < size; cnt++)
	{
		action(array[cnt]);
	}
}
