#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: char
 * @src: char
 *
 * Return: pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (*dest)
	{
		dest++;
	}
	i = 0;
	j = 0;
	while (dest[i] = src[j])
	{
		i++;
		j++;
	}
	return (dest);
}
