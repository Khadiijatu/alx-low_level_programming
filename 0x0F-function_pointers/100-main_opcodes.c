#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of main function
 * @argc: int
 * @argv: char pointer
 *
 * Return: 0, 1 or 2
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x", *((unsigned char *)&main + i));
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
