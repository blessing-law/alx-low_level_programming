#include "main.h"

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
print_alphabet()
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(0);
}

int main(void)
{
	print_alphabet();
	return (0);
}
