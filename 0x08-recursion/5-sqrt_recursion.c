#include "main.h"

int v_recursion(int v, int o);

/**
 * _sqrt_recursion - a prototype function that returns
 * the natural square root of a number.
 *
 * @n: variable holding the working value]
 * Return: squared value to be used
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	{
	return (v_recursion(n, 0));
	}
}

/**
 * v_recursion - function for a recursion
 * @v: variable holding the working value
 * @o: variable for counter
 * Return: result of squared value
 */

int v_recursion(int v, int o)
{
	if (o * o > v)
	{
		return (-1);
	}
	if (o * o == v)
	{
		return (o);
	}
	{
	return (v_recursion(v, o + 1));
	}
}
