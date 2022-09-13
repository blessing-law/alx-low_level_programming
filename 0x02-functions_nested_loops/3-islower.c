#include "main.h"
#include <stdio.h>

/**
 *_islower - checks for lowercase letter
 *'c' - parametr for function _islower
 *
 * Return: 1 if true
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
