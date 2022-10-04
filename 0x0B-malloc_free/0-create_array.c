#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of chars
 * @size: size of array
 * @c: string
 *
 * Return: NULL if 0 or pointer to array if fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	arr = malloc(c * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
