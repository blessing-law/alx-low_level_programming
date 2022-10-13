#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to separate arguments
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	num = 0;

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (separator != 0 && i < (n-1))
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
