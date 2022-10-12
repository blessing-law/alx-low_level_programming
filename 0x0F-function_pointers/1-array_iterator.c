#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function as parameter
 * @array: array to be executed
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size >= 1 && array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
