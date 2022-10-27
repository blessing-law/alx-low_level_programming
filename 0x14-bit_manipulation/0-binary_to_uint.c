#include "main.h"

/**
 * binary_to_uint - converts binary number to int
 * @b: pointer to binary string
 *
 * Return: converted string or 0 if null or error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unt = 0;
	int rem;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
		;
		for (i--, rem = 1; i >= 0; i--, rem *= 2)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}

			if (b[i] & 1)
			{
				unt += rem;
			}
		}
	return (unt);
}
