#include "main.h"

/**
 * _strcmp - prototype function that compares two strings using strcmp
 * @s1: variable pointer 1
 * @s2: variable pointer 2
 *
 * Return: 0, 1 or >1
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}

		a++;
	}

	return (0);
}
