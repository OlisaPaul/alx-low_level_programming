include "main.h"
/**
 * _print_rev_recursion - prints a string.
 * @s: source string
 *
 *
 * Return: the string printed.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
