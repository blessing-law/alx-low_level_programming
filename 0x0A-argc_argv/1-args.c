#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
