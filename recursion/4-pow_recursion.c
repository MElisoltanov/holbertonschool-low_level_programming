#include "main.h"

/**
 * _pow_recursion - Returns x raised to the power of y
 * @x: Base number
 * @y: Power
 *
 * Return: x^y, or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
