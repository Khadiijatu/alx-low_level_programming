#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: char
 * @s2: char
 *
 * Return: difference between s1 and s2 values
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 && *s2 && s1[i] = s2[i])
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}
