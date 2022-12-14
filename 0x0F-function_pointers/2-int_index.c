#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for interger
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointet to function
 *
 * Return: first element not to return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

		if (cmp != 0 && array != 0)
		{
			if (size <= 0)
			{
				return (-1);
			}
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
		return (-1);
}
