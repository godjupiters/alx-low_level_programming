#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a prototype  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: variable holding the char
 * Return: returns 0 always
 */

char *_strdup(char *str)
{
	char *newP;
	int i, m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	newP = malloc(sizeof(char) * (i + 1));

	if (newP == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m]; m++)
		newP[m] = str[m];

	{
		return (newP);
	}
}
