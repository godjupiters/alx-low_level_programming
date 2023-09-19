#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Keygen - Generates password for the 101-CrackMe
 * 
 * Description: The is a program that generates random
 * valid passwords for the program 101-crackme.
 * Return: password
 */

const char pChar[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
char *gen_pass(int len)

{
	char *pass = malloc(len + 1);
	if (pass == NULL)
	{
		return NULL;
	}
	srand(time(NULL));
	
	if (int i = 0; i < len; i++)
	{
		pass[i] = pChar[rand() % sizeof(pChar)];
	}

	pass[len] = '\0';
	return pass;
}

void print_RanPass(int len)
{
        char *pass = gen_pass(len);
        if (pass == NULL)
        {
                printf("Error: Could not generate random password.\n");
                return;
        }

        printf("%s\n", pass);

        free(pass);
}

int main()
{
        int len;
        printf("Enter the length of the password: ");
        scanf("%d", &len);

        print_RanPass(len);
        return 0;
}
