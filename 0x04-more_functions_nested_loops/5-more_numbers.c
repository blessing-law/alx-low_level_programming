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
	int j = '0';
	int y;

	while (j <= '9' )
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}

		for (y = 48; y < 53; y++)
		{
			_putchar(49 + y);
		}
		
		j++;
		_putchar('\n');
	}
}
