#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiply arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
			return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
