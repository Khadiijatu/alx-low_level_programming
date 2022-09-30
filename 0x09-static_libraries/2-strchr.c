#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: char pointer
 * @c: char
 *
 * Return: pointer to 1st occurrence of c, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
