#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 * @argc: int
 * @argv: char pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
