#include "main.h"

/**
 * clear_bit - a prototype function that sets the
 * value of a bit to 0 at a given index.
 * @n: a variable holding holding the argument
 * @index: a variable the index, starting from 0
 * of the bit you want to set
 * Return: 1 if success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sep;

	if (index > sizeof(n) * 8)
		return (-1);
	sep = ~(1 << index);

	*n &= *n & sep;
	return (1);
}
