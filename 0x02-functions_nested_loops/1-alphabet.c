#include "main.h"

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar(0);
}

int main(void)
{
	print_alphabet();
	return (0);
}
