#include "maih.h"
#include <stdio.h>

/**
 * more_numbers - print 0 - 14 ten times
 *
 * return void
 */

void more_numbers(void)
{
	int i;
	int j;

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
