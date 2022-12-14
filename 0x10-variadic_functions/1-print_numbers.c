#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to separate arguments
 * @n: number of arguments
 *
 * Return: sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator != 0 && i < (n - 1))
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}
		va_end(ap);
		printf("\n");
	}
}
