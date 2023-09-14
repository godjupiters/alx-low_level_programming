#include "main.h"
void positive_or_negative(int a)
{
	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (a < 0)
	{
		printf("%d is negative\n", a);
	}
	else
	{
		printf("%d is zero\n", a);
	}
}
