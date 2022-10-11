#include <stdio.h>
#include "dog.h"
#include <stdlin.h>

/**
 * free_dog - frees dog
 * @d: struct to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
