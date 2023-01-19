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
	va_list arguments;
	char *s;

	va_start(arguments, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(arguments, char*);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i < n)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(arguments);
}

