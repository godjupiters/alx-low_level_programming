#include "main.h"

/**
 * print_number - prototype function that prints an integer
 * @n: variable input holder
 * Return: 0
 */

void print_number(int n)
{
	unsigned int myVar;

	myVar = n;

	if (n < 0)
	{
		_putchar('-');
		myVar = -n;
	}

	if (myVar / 10 != 0)
	{
		print_number(myVar / 10);
	}
	{
		_putchar((myVar % 10) + '0');
	}
}
