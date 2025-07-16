#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: the result of a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
