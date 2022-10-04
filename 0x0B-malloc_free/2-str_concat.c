#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: pointer to concatened string, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i1, i2;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i1 = 0; s1[i1]; i1++)
		;
	for (i2 = 0; s2[i2]; i2++)
		;
	p = malloc(sizeof(char) * i1 + i2 + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; s1[j]; j++)
		p[j] = s1[j];
	for (k = 0; s2[k]; j++; k++)
		p[j] = s2[k];
	p[j] = '\0';
	return (p);
}
