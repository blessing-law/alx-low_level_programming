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

	i = strrev(s);
	puts(i);
}
