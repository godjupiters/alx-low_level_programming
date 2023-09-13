#include "main.h"

/**
 * print_last_digit - prototype
 * @a: fuction
 * Return: z
 */

int print_last_digit(int a)
{
	int z;

	z = a % 10;
	if (a < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}
