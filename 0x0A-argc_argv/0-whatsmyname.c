#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print name of function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
