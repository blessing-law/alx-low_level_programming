#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	while (i < 24)
	{
		for (j = '0'; j < 60; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar(i);
	}
	_putchar('\n');
}