#include "main.c"

/**
 * *_strchr - Locates a character in a string
 * @s: char pointer
 * @c: char pointer
 *
 * Return: pointer to 1st occurrence of c, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	if (*s == c)
	{
		return (s);
	}
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
