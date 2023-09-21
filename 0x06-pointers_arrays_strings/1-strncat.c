#include "main.h"

/**
 * _strncat - prototype function that concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 * @dest: variable for input 1
 * @src: variable for input 2
 * @n: variable interger for input 3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}

	dest[a] = '\0';
	return (dest);
}

