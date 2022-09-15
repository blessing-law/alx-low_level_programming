#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit
 * @c: parameter to be checked
 *
 * Return: 1 if digit, 0 if else
 */

int isdigit(int c);

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
