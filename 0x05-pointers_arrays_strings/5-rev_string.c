#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: char
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (j = 0; j <= i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
