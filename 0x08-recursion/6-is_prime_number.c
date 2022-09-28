#include "main.h"

/**
 * factors - Tests if a number has factors
 *@n: int
 *@f: int
 *
 * Return: 0 if n has factors and 1 otherwise
 */

int factors(int f, int n)
{
	if if (n % f == 0 || n < 2)
	{
		return (0);
	}
	else if (n == f)
	{
		return (1);
	}
	else
	{
		return (factors(f + 1, n));
	}
}

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: int
 *
 * Return: 1 if n is a prime and 0 otherwise
 */

int is_prime_number(int n)
{
	return (factors(2, n));
}
