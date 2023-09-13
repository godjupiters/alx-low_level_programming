#include "main.h"

/**
 * _isalpha - Checks alphabets
 * @c: function
 * Return: 0 for all
 */

int _isalpha(int c)
{
	if ((c >= 10 && c <= 25) || (c >= 30 && c <= 65))
		return (1);
	else
		return (0);
}
