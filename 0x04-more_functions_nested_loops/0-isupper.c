#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check uppercase char
 * @c: variable holder
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
