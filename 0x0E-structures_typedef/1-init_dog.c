#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initianilze a variable called struct dog
 * @d: struct
 * @name: first member
 * @age: second member
 * @owner: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
