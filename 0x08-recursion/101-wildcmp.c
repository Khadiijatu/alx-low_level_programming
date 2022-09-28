#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: 1 if s s1 and s2 are identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, (s2 + 1)));
	}

	if (*s1 == *s2)
	{
		return (wildcmp((s1 + 1), (s2 + 1)));
	}
	if (*s2 == '*')
	{
		if (s2[1] == '*')
			return (wildcmp(s1, (s2 + 1)));
		else if (wildcmp(s1, s2 + 1))
			return (1);
		else
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
