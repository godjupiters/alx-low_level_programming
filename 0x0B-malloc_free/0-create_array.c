#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: variable holding the length of array
 * @c: variable char to be assigned
 *
 * Return: return array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array_C;
	unsigned int i;

	array_C = malloc(sizeof(char) * size);
	if (size == 0 || array_C == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array_C[i] = c;
	}
	{
		return (array_C);
	}
}
