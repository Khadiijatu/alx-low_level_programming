#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: int
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (j < i)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
