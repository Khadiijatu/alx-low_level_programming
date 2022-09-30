#include <stdio.h>
#include <stdlib>

/**
 * main - Multiplies two numbers
 * @argc: int
 * @argv: char pointer
 *
 * Return: 0 for two arguments and 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
