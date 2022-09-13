#include "main.h"

/**
 * print_alphabet - Print the alphabet in lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

