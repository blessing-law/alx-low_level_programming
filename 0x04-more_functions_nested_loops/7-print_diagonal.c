#include "main.h"
#include <stdio.h>

/**
 *  print_diagonal - prints forward slash
 *  @n: numbers of times printed
 *
 *  Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('\\');
		}
			_putchar('\n')
	}
	else
	{
		_putchar('\n')
	}
}
