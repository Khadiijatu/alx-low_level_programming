#include "main.h"

/**
 * main - Print _putchar, followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char word[] = "_putchar\n";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
