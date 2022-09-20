#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse order of a string
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int l;
	char out[100];

	l = strlen(s);

	int j =0 ;

	for (i = l - 1; 1 >= 0; i--)
	{
		out[j] = s;
		j++;
	}
	_putchar(out);

}
