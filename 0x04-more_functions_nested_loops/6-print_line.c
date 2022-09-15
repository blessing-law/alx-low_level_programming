#include "main.h"
#include <stdio.h>

/**
 *  print_line - write a straight line in the terminal
 *  @n: The number of lines
 *
 *  Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar('_');
		}
		_putchar('\n')
	}
	else
	{
		_putchar('\n')
	}
}
