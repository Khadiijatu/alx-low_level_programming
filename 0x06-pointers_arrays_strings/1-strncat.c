#include "main.h"

/**
 * *_strncat - Concatenates two strings, using at most n bytes from src
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}
	j = 0;
	while (*(src + j) && j < n)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	return (dest);
}
