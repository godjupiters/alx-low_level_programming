#include "main.h"

/**
 * calc_base - a call function that calc base power
 * @base: variable holding the base value
 * @step: variable holding the power of the base
 * Return: value of base
 */

unsigned long int calc_base(unsigned int base, unsigned int step)
{
	unsigned long int digit;
	unsigned int count;

	digit = 1;
	for (count = 0; count < step; count++)
		digit *= base;
	return (digit);
}

/**
 * print_binary - a prototype function that prints
 * the binary representation of a number.
 * @n: variable holding the number to be printed
 * Return: VOID
 */

void print_binary(unsigned long int n)
{
	unsigned long int sep, scan;
	char ping;

	ping = 0;
	sep = calc_base(2, sizeof(unsigned long int) * 8 - 1);
	while (sep != 0)
	{
		scan = n & sep;
		if (scan == sep)
		{
			ping = 1;
			_putchar('1');
		}
		else if (ping == 1 || sep == 1)
		{
			_putchar('0');
		}
		sep >>= 1;
	}
}
