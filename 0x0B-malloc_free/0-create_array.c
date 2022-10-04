#include <stdio.h>
#include <string.h>
#include "main.h"

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

	arr = malloc(c * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		return (arr);
	}
}
