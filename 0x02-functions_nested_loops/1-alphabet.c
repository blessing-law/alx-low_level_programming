#include "main.h"

/**
 * main - Prints alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	void print_alphabet(void);
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		return (0);
	}
}
