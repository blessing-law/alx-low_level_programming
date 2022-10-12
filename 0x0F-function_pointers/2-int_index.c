#include <stdoi.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for interger
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointet to function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp != 0 && array != 0)
		{
			if (cmp(array(array[i]))
			{
				return (i);
			}
			else
			{
				return (-1);
			}
		}
	}

	if (size <= 0)
	{
		return (-1);
	}
}
