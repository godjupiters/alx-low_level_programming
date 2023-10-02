#include "main.h"

/**
 * _strpbrk - a prototype function that searches a
 * string for any of a set of bytes.
 * @s: variable input 1
 * @accept: variable input 2
 * Return: 0 for (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}
	{
	return ('\0');
	}
}
