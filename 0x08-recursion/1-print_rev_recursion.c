#include "main.h"
/**
 * _print_rev_recursion - prints a string.
 * @s: source string
 *
 *
 * Return: the string printed.
 */
int _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(s[index]);
}
