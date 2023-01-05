#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
 * @n: natural number
 *
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
/**
 * prime - calculates the sqrt of a number.
 * @n: natural number
 * @i: counter or number to be multiplied.
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int prime(int x, int y)
{

	if(x % y == 0)
	{
		return (0);
	}
	else if(y > (x / 2))
	{
		return (1);
	}
	else
	{
		return(prime(x, y + 1));
	}
}
