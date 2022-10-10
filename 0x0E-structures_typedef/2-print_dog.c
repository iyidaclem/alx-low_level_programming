#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
*print_dog - function that prints a struct dog
*@d: dog struct
*/


void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Name: %f\n", d->age);
		printf("Name: %s\n", d->owner);
	}
}

