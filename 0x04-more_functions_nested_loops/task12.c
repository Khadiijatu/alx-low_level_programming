#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: int
 *
 */

void print_number(int n)
{
	int l;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	l = 1000000000;
	while (l > 0)
	{
		if (n >= l)
		{
			if (l >= 10)
			{
				_putchar((n / l) % 10 + '0');
			}
			else
			{
				_putchar(n % 10 + '0');
				n = 0;
			}
		}
		if (l > 1)
			l = l / 10;
		else
			l = 0;
	}
}
