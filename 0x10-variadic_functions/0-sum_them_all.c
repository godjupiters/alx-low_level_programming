#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: variable holding the no. of paramters passed
 * @...: stage holder for countless variable numbers of paramters
 * Return: If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vs;
	unsigned int cnt, calc = 0;

	va_start(vs, n);

	for (cnt = 0; cnt < n; cnt++)
		calc += va_arg(vs, int);

	va_end(vs);

	return (calc);
}
