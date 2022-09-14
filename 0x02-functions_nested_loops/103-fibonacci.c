#include <stdio.h>

/**
 * main - Print the sum of the even-valued Fibonacci numbers below 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long sum = 2;
	long F1 = 1;
	long F2 = 2;

	for (i = 3; i <= 32; i++)
	{
		F2 += F1;
		F1 = F2 - F1;
		if (F2 % 2 == 0)
			sum += F2;
	}
	printf("%ld\n", sum);
	return (0);
}
