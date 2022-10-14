#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as param. on each element of array
 * @array: int pointer
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
