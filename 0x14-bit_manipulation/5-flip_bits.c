#include "main.h"

/**
 * flip_bits - a prototype function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: variable holding the first value
 * @m: variable holding the second value
 * Return: bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int uniq;

	count = 0;
	uniq = n ^ m;
	while (uniq != 0)
	{
		if (uniq & 1)
			count++;
		uniq >>= 1;
	}
	return (count);
}
