#ifndef DOG_H_
#define DOG_H_

#include <stdio.h>
/**
 * struct dog - struct with name, age and owner
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: struct that gives information about a specific dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
