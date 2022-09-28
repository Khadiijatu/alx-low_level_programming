#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: char pointer
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + (_strlen_recursion(++s)));
	}
	else
	{
		return (0);
	}
}
