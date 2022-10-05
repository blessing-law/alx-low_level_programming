#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return pointer to memory
 * @*str: string
 *
 * Return: pointer to duplicate string or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *arr;
	char ds;

	arr = strdup(str);
	ds = malloc(sizeof(char) * str);
	*ds = arr;
	return (*ds);
}
