#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(void)
{
        int row;
        int sum = 0;
        int i;

                for (i = 0; i <= 1024; i++)
                {
                        if(i % 5 == 0 || i % 3 == 0 )
                        {
                            sum = sum + i;
                        }
                }
                putchar('0' + (sum/100000));
                putchar('0' + ((sum / 10000) % 10));
                putchar('0' + ((sum / 1000) % 10));
                putchar('0' + ((sum / 100) % 10));
                putchar('0' + ((sum / 10) % 10));                
                putchar('0' + (sum  % 10));                
                putchar('\n');
                
}
