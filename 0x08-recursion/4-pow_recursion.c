#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: int
 * @y: int
 *
 * Return: x to the power of y, or -1 in y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}