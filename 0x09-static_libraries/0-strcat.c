#include "main.h"

/**
 * _strcat - prototype function that concatenates two strings.
 * This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 *
 * @dest: input variable 1
 * @src: input variable 2
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int o;
	int m;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[o] = src[m];
		o++;
		m++;
	}

	dest[o] = '\0';
	return (dest);
}

