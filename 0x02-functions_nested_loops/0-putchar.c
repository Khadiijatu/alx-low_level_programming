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

	while(i < 12)
	{
		_putchar(word[i]);
		i++;
	}
	return (0);
}
