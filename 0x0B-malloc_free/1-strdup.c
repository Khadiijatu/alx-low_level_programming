#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer to allocated space containing copy of string
 * @str: char pointer
 *
 * Return: pointer to duplicate string, or NULL
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	j = 0;
	for (j = 0; str[j]; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
