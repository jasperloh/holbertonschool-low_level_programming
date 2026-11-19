#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i, size;

	if (min > max)
		return (NULL);

	size = (unsigned int)max - (unsigned int)min + 1U;

	if (size == 0 || (size_t)size > SIZE_MAX / sizeof(int))
		return (NULL);

	arr = malloc((size_t)size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = (int)((unsigned int)min + i);

	return (arr);
}
