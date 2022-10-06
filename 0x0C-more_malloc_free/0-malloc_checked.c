#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: allocation
 *
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(sizeof(a) +1);
	return(a);
}
