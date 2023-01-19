#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints all the given numbers.
 * @separator: define character to separate the numbers
 * @n: number of numbers to be printed.
 * Return: a string with string.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%s", va_arg(ap, char *));
		else if (va_arg(ap, char *) == NULL)
			printf("%s", "(nil)")
		else
		{
			printf("%s%s", va_arg(ap, char *), separator);
		}
	}

	va_end(ap);

	printf("\n");
}
