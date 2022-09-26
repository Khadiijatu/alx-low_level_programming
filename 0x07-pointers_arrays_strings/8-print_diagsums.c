#include <stdio.h>
#include "main.c"

/**
 * print_diagsums - Prints sum of diagonals of a square matrix of integers
 * @a: int pointer
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;
	int diag_sum = 0;
	int antidiag_sum = 0;

	for (i = 0; i < size; i++)
	{
		j = i * (size + 1);
		k = (i + 1) * (size - 1);
		diag_sum += a[j];
		antidiag_sum += a[k];
	}
	printf("%d, %d\n", diag_sum, antidiag_sum);
}
