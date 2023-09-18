#include "main.h"

/**
 * rev_string - prototype function that reverses a string
 * @s = string
 * Return = Revered string
 */

void rev_string(char *s){
	char ver = s[0];
	int cnt  = 0;
	int o;

	while (s[cnt] != '\0')
		cnt++;
	for (o = 0; o < cnt; o++)
	{
		cnt--;
		ver = s[o];
		s[o] = s[cnt];
		s[cnt] = ver;
	}
}
