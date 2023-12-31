#include "main.h"
#include <string.h>

/**
 * print_rev - prototype function that prints a string
 * in reverse, followed by a new line.
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = 0;
	int r;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (r = len; r > 0; r--)
	{
		putchar(*s);
		s--;
	}
		putchar('\n');
}
