#include "dog.h"
#include <stdlib.h>

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
	int i, j, k;

	i = 0;
	while (name[i])
		i++;
	j = 0;
	while (owner[j])
		j++;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).name = malloc(i);
	(*p).owner = malloc(j);
	/* (*p).name[0] = name[0]; */
	for (k = 0; name[k]; k++)
	{
		(*p).name[k] = name[k];
	}
	/* (*p).owner[0] = owner[0]; */
	for (k = 0; owner[k]; k++)
	{
		(*p).owner[k] = owner[k];
	}
	(*p).age = age;
	return (p);
}
