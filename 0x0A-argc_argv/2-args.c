#include <stdio.h>

/**
 * main - Prints all arguments this program receives
 * @argc: int
 * @argv: char pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
