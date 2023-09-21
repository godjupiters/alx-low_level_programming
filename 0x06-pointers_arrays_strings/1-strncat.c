#include "main.h"

/**
 * strncat - prototype function that concatenates two strings.
 * @dest: variable for input 1
 * @src: variable for input 2
 * @n: variable interger for input 3
 * Return: dest value
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

