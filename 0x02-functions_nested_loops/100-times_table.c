#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 * @n: int
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 1 && n < 16)
	{
		for (i = 0; i <= n; i++)
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				int k = i * j;
				if (k > 99)
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
				else if (k < 10)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k % 10 + '0');
				else if (k > 9)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
			}
			_putchar('\n');
	}
}
