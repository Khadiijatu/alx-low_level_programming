#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long c = 0;
	long d = 0;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i <= 98; i++)
	{
		b = b + a;
		a = b - a;
		if (b / 1000000000 > 0)
		{
			d++;
			b = b % 1000000000;
		}
		d = d + c;
		c = d - c;
		if (d)
		{
			printf("%ld", d);
			e = b;
			while (e < 100000000)
			{
				printf("0");
				e *= 10;
			}
		}
		printf("%ld", b);
		if (i < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
