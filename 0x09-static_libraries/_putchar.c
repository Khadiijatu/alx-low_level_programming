#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
