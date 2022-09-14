#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int f;
	long int f1 = 1;
	long int f2 = 2;
	
	printf("%i, %i, ", f1, f2);
	for (i = 0; i <= 98; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;

		printf("%lu", f);
		
		if (i < 98)
			printf(", ");
	}
}
