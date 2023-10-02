#include "main.h"

/**
 * _strncpy - prototype function that copies a string
 * Prototype char *_strncpy(char *dest, char *src, int n)
 * Your function should work exactly like strncpy
 *
 * @dest: variable input 1
 * @src: variable input 2
 * @n: variable input 3
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
