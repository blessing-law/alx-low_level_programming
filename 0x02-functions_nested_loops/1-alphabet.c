#include "main.h"

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	print_alphabet();
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
