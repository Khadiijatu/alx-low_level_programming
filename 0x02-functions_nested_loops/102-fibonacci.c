#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long F1 = 1;
	long F2 = 2;

	printf("%ld, %ld, ", F1, F2);
	for (i = F1 + F2; i <= 50; i++)
	{
		F2 += F1;
		F1 = F2 - F1;
		printf("%ld", F2);
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
