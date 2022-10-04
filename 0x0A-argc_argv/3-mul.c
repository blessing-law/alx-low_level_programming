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
	int mul1;
	int mul2;
	int ret;

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	ret = mul1 * mul2;

	if (mul1 && mul2)
	{
		printf("%d\n", ret);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
