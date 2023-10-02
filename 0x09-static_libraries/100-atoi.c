#include "main.h"

/**
 * _atoi - a prototype function for converting strings
 * @s: variable holding the string for converseion
 * Return: int
 */

int _atoi(char *s)
{
	int mark = 1, i = 0;
	unsigned int con = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		mark *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		con = (con * 10) + (s[i] - '0');
		i++;
	}
	{
		con *= mark;
		return (con);
	}
}
