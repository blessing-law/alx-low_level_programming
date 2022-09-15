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
	int i; /* columns */
	int j;/*rows*/

	for (i = 0; i <= n; i++)
	{
		_putchar('\n');

		for (j = 0; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
