#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: char
 * @src: char
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (tmp);
}
