#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a prototype function that allocates memory using malloc.
 * @b: variable holding the value of the number of byts
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
