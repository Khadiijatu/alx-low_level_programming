#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of main function
 * @argc: int
 * @argv: char pointer
 *
 * Return: 0, 1 or 2
 */
int main(int argc, char **argv)
{
	int i;
	int a = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < a)
	{
		printf("%02x", (char *)main[i]);
		i++;
		if (a > i)
			printf(" ");
	}
	printf("\n");
	return (0);
}
