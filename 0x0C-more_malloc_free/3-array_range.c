#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: int
 * @max: int
 *
 * Return: pointer to array containing values from min to max
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
