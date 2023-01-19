#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of variables
 *
 * Return: Alway
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

        va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}

	va_end(ap);

	printf("\n");
}

