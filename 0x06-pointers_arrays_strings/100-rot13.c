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
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				str[i] = rot13[j];
				break;
		}
	}
	return (str);
}
