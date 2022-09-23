#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @str : char pointer
 *
 * Return: pointer to a string
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (j = 0; j < 12; i++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
