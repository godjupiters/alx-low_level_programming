#include "main.h"

/**
 * int_strlen - function that returns the length of a string.
 * @s: variable string of pointer legnth
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
