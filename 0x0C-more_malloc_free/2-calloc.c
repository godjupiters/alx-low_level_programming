#include <stdlib.h>
#include "main.h"

/**
 * *_memory - a function that fills memory
 * @x: variable holding the memory area to be filled
 * @y: variable holding the char to be copy
 * @z: variable holding the no. of copy iteration
 * Return: pointer to the memory area s
 */

char *_memory(char *x, char y, unsigned int z)
{
	unsigned int o;

	for (o = 0; o < z; o++)
	{
		x[o] = y;
	}
	{
	return (x);
	}
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: variable holding the no of elements in array
 * @size: variable holding the size of per element
 * Return: pointer variable to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
	{
		return (NULL);
	}

	_memory(pointer, 0, nmemb * size);
	{
	return (pointer);
	}
}
