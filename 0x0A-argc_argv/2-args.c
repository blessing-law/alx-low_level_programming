#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - print all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		printf("\n");
	}
	return (0);
}
