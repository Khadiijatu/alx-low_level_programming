#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atol - Converts a string to an integer
 * @s: char
 *
 * Return: integer
 */

unsigned long int _atol(char *s)
{
	long i = 0;
	long j = 1;
	long num = 0;

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

/**
 * main - multiplies two positive numbers
 * @argc: int
 * @argv: char type pointer
 *
 * Return: 0 or 98
 */

int main(long int argc, char *argv[])
{
	long int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	printf("%lu\n", _atol(argv[1]) * _atol(argv[2]));
	return (0);
}
