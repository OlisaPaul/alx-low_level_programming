#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *
 * int_index - returns the index of the first element for which the cmp function does not return 0
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for(i = 0; i < size; i++)
	{			
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
