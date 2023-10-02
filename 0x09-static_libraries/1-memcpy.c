#include "main.h"

/**
 * _memcpy - a prototype function that copies memory area.
 * @dest: variable the holds the memory
 * @src: variable to copy address from
 * *@n: variable holding the number of circle
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	{
	return (dest);
	}
}
