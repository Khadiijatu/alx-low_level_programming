#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @str : char pointer
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *code1337 = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if str[i] = letters[j]
				str[i] = code1337[j];
		}
	}
	return (str);
}
