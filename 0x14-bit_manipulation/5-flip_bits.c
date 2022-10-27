#include "main.h"

/**
 * flip_bits - return number of bits to flip
 * @n: input value one
 * @m: input value two
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1. m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			i++
		}
	}
	return (i);
}
