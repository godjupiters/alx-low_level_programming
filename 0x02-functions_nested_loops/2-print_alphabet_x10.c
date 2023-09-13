#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a;
	char z;

	for (a = 0 ; a < 10; a++)
	{
		for (z = 'a' ; z <= 'z' ; z++)
			_putchar(z);
		_putchar('\n');
	}
}
