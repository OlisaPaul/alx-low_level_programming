#include <string.h>
#include "main.h"

/**
 * _puts - prints the string passed into it
 * @str: parameter of string type
 * Return: always 0
 */
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len; i < 0; i--)
	{
	    _putchar(*(str + i));
	}
	_putchar('\n');
}
