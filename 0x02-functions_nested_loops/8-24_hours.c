#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int j = 0;

	while (j < 24)
	{
		int i;

		_putchar(j);
		_putchar(':');
		for (i = 0; i < 60; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
		j++;
	}
}
