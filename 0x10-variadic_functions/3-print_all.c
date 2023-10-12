#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a prototype function that prints anything.
 * @format: variable holding the list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int cnt = 0;
	char *strP, *slash = "";

	va_list cat;

	va_start(cat, format);

	if (format)
	{
		while (format[cnt])
		{
			switch (format[cnt])
			{
				case 'c':
					printf("%s%c", slash, va_arg(cat, int));
					break;
				case 'i':
					printf("%s%d", slash, va_arg(cat, int));
					break;
				case 'f':
					printf("%s%f", slash, va_arg(cat, double));
					break;
				case 's':
					strP = va_arg(cat, char *);
					if (!strP)
						strP = "(nil)";
					printf("%s%s", slash, strP);
					break;
				default:
					cnt++;
					continue;
			}
			slash = ", ";
			cnt++;
		}
	}

	printf("\n");
	va_end(cat);
}
