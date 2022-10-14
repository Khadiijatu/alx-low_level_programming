#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: int pointer
 * @size: number of elements in array
 * @cmp: function pointer
 *
 * Return: -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
