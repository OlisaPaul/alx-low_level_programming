#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_puthchar(alpha);
		}
		_puthchar('\n');
	}
}

