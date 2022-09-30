#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: char
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 1;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			j = -1 * j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = (s[i] - '0') * j + num * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (num);
}
