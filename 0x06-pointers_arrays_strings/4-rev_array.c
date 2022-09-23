#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: int pointer
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - j) = temp;
		i++;
	}
}
