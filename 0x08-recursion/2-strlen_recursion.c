#include "main.h"

/**
 * _strlen_recursion - a prototype function that returns the length of a string
 * @s: variable to be counted
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	{
		return (length);
	}
}
