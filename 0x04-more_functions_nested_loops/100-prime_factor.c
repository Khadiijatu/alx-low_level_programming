#include <stdio.h>
#include "main.h"

/**
 * largest_prime_factor - Computes the largest prime factor of a number
 * @n: long
 *
 * Return: the largest prime factor of n
 */

int largest_prime_factor(long n)
{
	int i;

	i = 2;
	while (n % i != 0)
		i++;
	if (i == n)
		return (i);
	else
		return (largest_prime_factor(n /i));
}


/**
 * main - Prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	printf("%d\n", largest_prime_factor(612852475143));
	return (0);
}
