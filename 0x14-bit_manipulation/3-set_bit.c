#include "main.h"

/**
 * set_bit - a prototype function that sets the value
 * of a bit to 1 at a given index
 * @n: a variable hoolding the pointer number to set
 * @index: variable holding the index is the index,
 * starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int config;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	config = 1 << index;
	*n = *n | config;
	return (1);
}
