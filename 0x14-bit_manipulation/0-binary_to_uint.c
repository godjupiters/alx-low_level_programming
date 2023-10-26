#include "main.h"

/**
 * binary_to_uint - a prototype function that converts a binary
 * number to an unsigned int.
 * @b: a variable holding the pointing to a string of 0 and 1 chars
 * Return: converted value of binary number, or 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int digit;

	digit = 0;
	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		digit *= 2;
		if (b[count] == '1')
			digit += 1;
		else if (b[count] != '0')
			return (0);
	}
	return (digit);
}
