#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			if (alpha != 'e' || alpha != 'q')
			{
				putchar(alpha);
			}
		}
		putchar('\n');
		return (0);
}
