#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * claculate factorial
 * @n: number to be calculated
 *
 * Return: answer or -1 for error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return n * factorial(n - 1);
}
