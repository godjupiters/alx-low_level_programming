#include"main.h"

/**
 * get_bit - a prototype function that returns the value
 * of a bit at a given index.
 * @n: variable holding the number to be checked
 * @index: variable holding index, starting from 0
 * of the bit you want to get
 * Return: value of the bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sep, ver;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sep = 1 << index;
	ver = n & sep;
	if (ver == sep)
		return (1);
	return (0);
}
