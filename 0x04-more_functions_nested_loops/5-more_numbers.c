#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print zero to fourteen ten times
 *
 * return void
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 11)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
	_putchar('\n');
}
