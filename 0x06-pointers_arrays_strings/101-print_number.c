#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: int
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n / 10)
		{
			print_number(n / -10);
		}
		_putchar('0' - n % 10);
	}
	else
	{
		if (n / 10)
		{
			print_number(n / 10);
		}
		_putchar('0' + n % 10);
	}
}
