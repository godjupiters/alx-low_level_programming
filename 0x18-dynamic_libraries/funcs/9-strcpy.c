#include "main.h"

/**
 * _strcpy - prototype function that copies the string
 * pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: Paste
 * @src: Copy
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

