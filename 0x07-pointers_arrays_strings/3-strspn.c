#include "main.h"

/**
 * _strspn - a prototype function that gets the length of a prefix substring.
 * @s: variable input 1
 * @accept: variable input 2
 * Return: 0 for (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ui = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				ui++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (ui);
		}
		s++;
	}
	return (ui);
}
