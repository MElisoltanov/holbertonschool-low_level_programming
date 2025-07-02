#include "main.h"

/**
 * sqrt_helper - Recursively checks for the natural square root
 * @n: The number to find the square root of
 * @guess: Current guess value being tested
 *
 * Return: The natural square root, or -1 if not found
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	if (guess * guess > n)
	{
		return (-1);
	}

	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: The square root, or -1 if it doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 0));
}
