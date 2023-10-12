#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a prototype function that prints strings
 * followed by a new line.
 * @separator: variable holding the strings printed
 * @n: variable holding the no. of strings passed
 * @...: variable holding the no. of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strAll;
	char *strP;
	unsigned int cat;

	va_start(strAll, n);

	for (cat = 0; cat < n; cat++)
	{
		strP = va_arg(strAll, char *);

		if (strP == NULL)
			printf("(nil)");
		else
			printf("%s", strP);

		if (cat != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strAll);
}
