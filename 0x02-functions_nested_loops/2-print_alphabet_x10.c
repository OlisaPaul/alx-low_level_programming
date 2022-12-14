#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
        int i;
	char alpha;

	i = 0;

	while(i < 10)
	{

        	alpha = 'a';
	
       	 while(alpha <= 'z')
	 {
       		 _putchar(alpha);
               	 alpha++;
       	 }
       	 _putchar('\n');
	}
}

