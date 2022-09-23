#include "main.h"

/**
 * *rot13 - Encodes a string using rot13
 * @str : char pointer
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code_rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (letters[j])
		{
			if (str[i] == letters[j])
			{
				str[i] = code_rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
