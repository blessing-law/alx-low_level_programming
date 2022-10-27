#include "main.h"

/**
 * clear_bit - set value at index to 0
 * @n: input value
 * @index: index to be changed
 *
 * Return: 1 if success or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}

	i = 1 << index;

	if (*n & i)
	{
		*n ^= i;
	}

	return (1);
}
