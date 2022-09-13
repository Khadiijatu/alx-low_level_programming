#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: int
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int last_digit = _abs(n % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}