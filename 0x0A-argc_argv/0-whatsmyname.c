#include <stdio.h>

/**
 *
 * main: returns the name of a program
 * @argc: integer argument
 * @argv: array of string
 *
 *return 0
 */

int  main (int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);	
}
