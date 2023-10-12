#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers
 * followed by a new line.
 * @separator: variable holding string to be printed
 * @n: variable holdint the no. of integers passed
 * @...: a variable holding no. of nos. to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	unsigned int cat;

	va_start(digits, n);

	for (cat = 0; cat < n; cat++)
	{
		printf("%d", va_arg(digits, int));

		if (cat != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(digits);
}
