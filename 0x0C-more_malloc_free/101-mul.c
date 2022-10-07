#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * print - Prints a string
 * @s: char pointer
 */

void print(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		print(s + 1);
	}
	else
		_putchar('\n');
}

void print_number(int n);

/**
 * main - multiplies two positive numbers
 * @argc: int
 * @argv: char type pointer
 *
 * Return: 0 or 98
 */

int main(int argc, char *argv[])
{
	/* Initial attempt */
	int i, j;

	if (argc != 3)
	{
		print("Error");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				print("Error");
				exit(98);
			}
		}
	}
	printf("%lu\n", atol(argv[1]) * atol(argv[2]));
	return (0);
}

/**
 * print_number - Prints an integer
 * @n: int
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n / 10)
		{
			print_number(n / -10);
		}
		_putchar('0' - n % 10);
	}
	else
	{
		if (n / 10)
		{
			print_number(n / 10);
		}
		_putchar('0' + n % 10);
	}
}
