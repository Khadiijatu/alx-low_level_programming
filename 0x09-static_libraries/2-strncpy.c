#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: pointer to a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
