#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int alphaLow;
	int alphaUpp;

	for (alphaLow = 'a'; alphaLow <= 'z'; alphaLow++)
		{
		putchar(alphaLow);
		}
	for (alphaUpp = 'A'; alphaUpp <= 'Z'; alphaUpp++)
		{
		putchar(alphaUpp);
		}
		putchar('\n');
		return (0);
}
