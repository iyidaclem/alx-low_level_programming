#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*new_dog - create new instance of dog struce
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*Return: the dog instance
*/


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t *));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

