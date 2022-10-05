#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if error, else return 0
 */

int main(int argc, char *argv)
{
	int i;
	int a;

	for (i = 0; i > argc - 1; i++)
	{
		a += atoi(argv[i]);
	}
	if (typeof(a) != int)
	{
		printf("Error\n");
		return (1);
	}
	return (0);


}
