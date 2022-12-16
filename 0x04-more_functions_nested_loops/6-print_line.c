#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = '0'; i < n; i++)
        {
            _putchar(i);
        }
    }
}
