#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times over
 *
 * Return: void)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int a;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar('\n');
	}
}
