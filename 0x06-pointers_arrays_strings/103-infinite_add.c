#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: char pointer
 * @n2: char pointer
 * @r: char pointer
 * @size_r: int
 *
 * Return: pointer to the sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	char *sum;

	while (n1[i])
	{
		i++;
	}
	while (n2[j])
	{
		j++;
	}

	*sum = r[size_r];
	while (n1[i] > 0 || n1[j] > 0)
	{
		if (n1[i] + n2[j] > 0)
		{
			*sum = n1[i - 1] + n2[j - 1] + 1;
		}
		else
		{
			*sum = n1[i] + n2[j];
		}
		i--;
		j--;
	}
	return (sum);
}
