#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: char
 *
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
