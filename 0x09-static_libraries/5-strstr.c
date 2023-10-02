#include "main.h"

/**
 * _strstr - a prototype function that locates a substring.
 * @haystack: variable input 1
 * @needle: variable input 2
 * Return: 0 for (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ht = haystack;
		char *nd = needle;

		while (*ht == *nd && *nd != '\0')
		{
			ht++;
			nd++;
		}

		if (*nd == '\0')
		{
			return (haystack);
		}
	}
	{
	return (0);
	}
}
