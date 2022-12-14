#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024
 * @n: integer argument
 */

int main(void)
{
    int sum = 0;
    int i;

    for (i = 0; i <= 1024; i++)
    {
        if(i % 5 == 0 || i % 3 == 0 )
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return (0);

}
