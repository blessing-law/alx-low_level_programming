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
	if (*s)
	{
		reverse(s + 1);
	}
}
