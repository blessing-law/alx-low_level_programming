#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * _pow_recursion - calculate x to the power of y
 * @x: root number
 * @y: expoonent
 *
 * Return: result or -1 if error
 */

int _pow_recursion(int x, int y)
{
	int p;

	p = pow(x, y);

	if (y < 0)
	{
		return (-1);
	}
	return (p);
}
