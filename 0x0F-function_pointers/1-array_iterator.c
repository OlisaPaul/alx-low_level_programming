#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - gives the list of items to a function pointer
 * @array: an array of integers
 * @size: the size of the array
 * @action: function pointer
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL action != NULL)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
