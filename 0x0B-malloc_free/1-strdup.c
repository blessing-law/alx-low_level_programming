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

	if (str == NULL)
	{
		return (NULL)
	}

	dup = malloc(sizeof(str));

	for (i = 0; i < str; i++)
	{
		arr[i] = strdup(str);
		*dup = arr[i];
	}
	if (*arr == NULL)
	{
		return (NULL);
	}
	return (dup);
}
