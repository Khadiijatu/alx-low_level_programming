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
	int i, j, k, l;

	i = 0;
	while (name[i])
		i++;
	j = 0;
	while (owner[j])
		j++;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).age = age;
	(*p).name = malloc(i);
	(*p).owner = malloc(j);
	k = 0;
	do {
		(*p).name[k] = name[k];
	} while (name[k++]);
	l = 0;
	do {
		(*p).owner[l] = owner[l];
	} while (owner[l++]);
	return (p);
}
