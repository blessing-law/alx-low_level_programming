#include "main.h"

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}