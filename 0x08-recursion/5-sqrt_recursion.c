#include "main.h"
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 *
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int _sqrt_recursion(int n)
{
    if (n < 1)
    {
        return (-1);
    }
    else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
    {
        return (main_sqrt(n, 1));
    }
}
/**
 * main_sqrt - calculates the sqrt of a number.
 * @n: natural number
 * @i: counter or number to be multiplied.
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int main_sqrt(int x, int y)
{
    if(y * y == x)
    {
        return (y);
    }
    else if(y * y > x)
    {
        return (-1);
    }
    else
    {
        return(main_sqrt(x, y + 1));
    }
}
