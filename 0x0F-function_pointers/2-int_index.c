#include <stddef.h>

/**
 *
 * int_index - search for integer in array via function pointer
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return (-1);

}
