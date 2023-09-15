#include "main.h"

/**
 * print_diagonal - function to print forwardslash
 * @n: number of forwardslash to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a, b;

		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b <= a ; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
