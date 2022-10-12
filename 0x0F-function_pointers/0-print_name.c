#include <stdio.h>
#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - function to print name
 * @name: first parameter
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
