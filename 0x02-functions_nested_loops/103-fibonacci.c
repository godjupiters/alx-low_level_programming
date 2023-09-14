#include <stdio.h>

/**
  * main - used function
  * Return: void
  */

int main(void)
{
        int a = 0;
        long b = 1, c = 2, d = c;


        while (c + b < 4000000)
        {
                c += b;
                if (c % 2 == 0)
                d += c;
                b = c - b;
                ++a;
        }
        printf("%ld", d);
        return (0);
}
