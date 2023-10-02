#include "main.h"

/**
 * _strchr - a prototype function that locates a character in a string.
 * @s: variable for input 1
 * @c: variable for input 2
 * Return: 0 for (Success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	{
	return (0);
	}
}
