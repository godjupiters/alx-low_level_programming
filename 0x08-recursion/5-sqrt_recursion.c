#include "main.h"

int v_recursion(int n, int i);

/**
 * _sqrt_recursion - a prototype function that returns
 * the natural square root of a number.
 *
 * @n: variable holding the working value]
 * Return: squared value to be used
 */

int _sqrt_recursion(int n)
{
	while (n < 0)
	{
		return (-1);
	}
	{
	return (v_recursion(n, 0));
	}
}

/**
 * v_recursion - function for a recursion
 * @n: variable holding the working value
 * @i: variable for counter
 * Return: result of squared value
 */

int v_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	{
	return (v_recursion(n, i + 1));
	}
}
