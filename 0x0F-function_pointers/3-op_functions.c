#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that returns the sum of two integers.
 * @a: variable 1 holding first number.
 * @b: variable 2 holding second number.
 * Return: sum of variable a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the differnce of two integers.
 * @a: variable 1 holding first number.
 * @b: variable 2 holding second number.
 * Return: difference of variable a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the multiplication of two integers.
 * @a: variable 1 holding first number.
 * @b: variable 2 holding second number.
 * Return: product of variable a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers.
 * @a: variable 1 holding first number.
 * @b: variable 2 holding second number.
 * Return: division of variable a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns the reminder
 * of the division of two integers.
 * @a: variable 1 holding first number.
 * @b: variable 2 holding second number.
 * Return: reminder of variable a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

