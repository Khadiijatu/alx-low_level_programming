#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calculates sum of two integers
 * @a: int
 * @b: int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates ddifference of two integers
 * @a: int
 * @b: int
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of two integers
 * @a: int
 * @b: int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: int
 * @b: int
 *
 * Return: quotient of a divided by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: int
 * @b: int
 *
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
