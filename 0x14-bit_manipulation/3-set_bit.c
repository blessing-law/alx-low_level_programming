#include "main.h"

/**
 * set_bit - set bit at given point to 1
 * @n: input value
 * @index: index value of bit
 *
 * Return: return 1 if success or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
