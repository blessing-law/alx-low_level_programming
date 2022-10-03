#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_argument - print all arguments
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0
 */

int print_argument(int argc, char *argv[])
{
	int i;

	for (i = 0; i > argc -1; i++)
	{
		printf("%d\n", argc[i]);
	}
}
