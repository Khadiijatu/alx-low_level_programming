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
			if (i == 0)
			{
				str[i] -= 32;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (str[i - 1] == sep[j])
					{
						str[i] -= 32;
					}
				}
			}
		}
	}
	return (str);
}
