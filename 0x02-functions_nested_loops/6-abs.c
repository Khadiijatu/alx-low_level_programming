#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: int
 *
 * Return: n if n is greater than 0 and -n otherwise
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
