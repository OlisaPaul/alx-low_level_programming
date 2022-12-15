#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long a = 1;
	long b = 0;
	long fibo = 0;

	for (i = 1; i <= 50; i++)
	{
		fibo = a + b;
		b = a;
		a = fibo;
		if (i < 50)
		{
			printf("%ld, ", fibo);
		}
		else
		{
			printf("%ld", fibo);
		}

	}

	printf("\n");

	return (0);
}
