#include "function_pointers.h"

/**
 * int_index - a prototype function that searches for an integer
 * @array: variable array used
 * @size: variable holding the size of elements in the array
 * @cmp: variable holding the pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cnt;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (cnt = 0; cnt < size; cnt++)
	{
		if (cmp(array[cnt]))
			return (cnt);
	}
	{
		return (-1);
	}
}
