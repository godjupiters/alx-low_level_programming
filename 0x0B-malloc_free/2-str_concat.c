#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a prototype function that concatenates two strings
 * @s1: variable for input 1
 * @s2: variable for input 2
 * Return: returns two conC strings
 */

char *str_concat(char *s1, char *s2)
{
	char *conC;
	int i, kC;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = kC = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[kC] != '\0')
		kC++;
	conC = malloc(sizeof(char) * (i + kC + 1));

	if (conC == NULL)
		return (NULL);
	i = kC = 0;

	while (s1[i] != '\0')
	{
		conC[i] = s1[i];
		i++;
	}

	while (s2[kC] != '\0')
	{
		conC[i] = s2[kC];
		i++, kC++;
	}
	conC[i] = '\0';
	{
		return (conC);
	}
}
