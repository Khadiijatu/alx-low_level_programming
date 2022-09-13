#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times the alphabet in lower case
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

