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
	int t;

	l = strlen(s);

	for (i = 0; i < l/2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}

}
