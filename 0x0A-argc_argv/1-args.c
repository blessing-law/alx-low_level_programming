#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_argument - print number of arguments
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */

int print_argument(int argc, __attribute__((unused)) char *argv[])
{
	_putchar(argc);
	_putchar('\n');
	return (0);
}
