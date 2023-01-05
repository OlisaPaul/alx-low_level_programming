#include "main.h"
/**
 * factorial - returns the factorial of n
 * @n: source integer
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
