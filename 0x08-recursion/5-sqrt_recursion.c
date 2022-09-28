#include "main.h"

/**
 * find_sqrt - Tests if a number has natural square root
 *@n: int
 *@r: int
 *
 * Return: natural square root of n if it exists, or -1
 */

int find_sqrt(int r, int n)
{
	if ( n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == r * r)
	{
		return (r);
	}
	else if (n > r)
	{
		return (find_sqrt(r + 1, n));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: int
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(1, n));
}
