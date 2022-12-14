#include "main.h"
/**
 * _puts_recursion - prints a string.
 * @s: source string
 *
 *
 * Return: the string printed.
 */

void _puts_recursion(char *s)
{
	int index = 0;

	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[index]);
	_puts_recursion(s + 1);
}
