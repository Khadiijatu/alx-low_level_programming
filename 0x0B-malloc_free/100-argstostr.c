#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: char double pointer
 *
 * Return: pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *p;

	if (ac == 0 || av == 0)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			i++;
		}
		i++;
	}
	p = malloc(i + 1);
	if (p == 0)
		return (NULL);
	l = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			p[l++] = av[j][k];
		}
		p[l++] = '\n';
	}
	p[l] = '\0';
	return (p);
}
