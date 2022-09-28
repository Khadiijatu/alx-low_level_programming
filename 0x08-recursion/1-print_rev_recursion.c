#include "main.h"

/**
 * _print_rev_recursion - Reverses and prints a string
 * @s: char pointer
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
