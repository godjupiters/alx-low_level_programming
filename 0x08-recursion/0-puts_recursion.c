#include "main.h"

/**
 * _puts_recursion - a prototype a function that prints a string
 * followed by a new line.
 * @s: variable input
 * Return: 0 for (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
