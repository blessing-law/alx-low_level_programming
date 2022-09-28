#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - print string in revese
 * @s: string to be printed
 *
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	int i;
	int l;
	int t;

	l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
