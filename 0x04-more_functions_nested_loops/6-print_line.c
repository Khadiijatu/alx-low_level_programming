#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: int
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
