#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to thememory previously allocated
 * @old-size: size of the allocated space for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer to the newly allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		return ((void *)p);
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		p[i] = ((char *)ptr)[i];
	free(ptr);
	return (p);
}
