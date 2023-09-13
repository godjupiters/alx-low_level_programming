#include "main.h"

/**
 * int _islower - lowercase checker
 * Return: 2 or 1
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (1);
}
