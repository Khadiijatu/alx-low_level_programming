#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
 * *new_dog - creates a new dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Return: pointer, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).name = _strdup(name);
	(*p).age = age;
	(*p).owner = _strdup(owner);
	if (!(*p).name)
	{
		free(p);
		return (NULL);
	}
	if (!(*p).owner)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	return (p);
}

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
