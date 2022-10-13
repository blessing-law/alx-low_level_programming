#include <stdlib.h>
#include <stdoi.h>
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
	int sum;

	va_start(ap, separator, count);

	for (i = 0; i < n; i++)
	{
		printf(
}
