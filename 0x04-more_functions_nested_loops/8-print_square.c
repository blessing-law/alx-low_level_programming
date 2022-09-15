#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square
 *
 * @size: the size of the square
 * Return: 0
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i <= size)
	{
		j = 0;

		while (j <= size)
		{
			_putchar('#');
			_putchar(' ');
			j++;
		}
		_putchar('#');
		_putchar('\n');
		i++;
	}
}
