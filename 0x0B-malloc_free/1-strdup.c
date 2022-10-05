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
	char *dup;
	int i;

	for (i = 0; i > str -1; i++)
	{
		arr[i] = strdup(str);
	}
	dup = malloc(sizeof(arr));
	*dup = *arr;
	return (dup);
}
