#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: int
 *
 * Return: factorial of n, or -1 in n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
