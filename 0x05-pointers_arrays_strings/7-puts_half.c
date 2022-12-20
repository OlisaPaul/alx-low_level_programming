#include <string.h>
#include "main.h"

/**
 * _puts - prints the string passed into it
 * @str: parameter of string type
 * Return: always 0
 */
void puts_half(char *str)
{
    int i;
    int len;
    int n;
    for (len = 0; *(str + len) != 0; len++)
    {
        len++;
    }

    if (len % 2 == 0)
    {
        n = len / 2;
    }
    else
    {
        n = (len / 2)  + 1;
    }

    for (i = n; i < len; i++)
    {
        _putchar(*(str + i));
    }
    _putchar('\n');
}
