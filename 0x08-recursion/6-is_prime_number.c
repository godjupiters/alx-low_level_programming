#include "main.h"

int primeF(int v, int o);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: variable for evaluation
 * Return: 1 for prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	{
	return (primeF(n, n - 1));
	}
}

/**
 * primeF - recursion function
 * @v: variable for avaluation
 * @o: counter
 * Return: 1 for prime else 0
 */

int primeF(int v, int o)
{
	if (o == 1)
	{
		return (1);
	}
	if (v % o == 0 && o > 0)
	{
		return (0);
	}
	{
	return (primeF(v, o - 1));
	}
}
