#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - claculate factorial
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
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
