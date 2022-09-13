#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j < 10)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
