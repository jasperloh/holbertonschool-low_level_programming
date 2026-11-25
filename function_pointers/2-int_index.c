#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer using a function pointer
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Function pointer used for comparison
 *
 * Return: Index of first match, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
		{
			return (i);
		}
	}

	return (-1);
}
