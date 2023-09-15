#include "main.h"

/**
 * print_most_numbers - function print <= 9, != 2 && 4
 * Return: void
 */

void print_most_numbers(void)
{
	int v;

	for (v = 0 ; v < 10 ; v++)
	{
		if (v != 2 && v != 4)
			_putchar(v + '0');
	}
		_putchar('\n');
}
