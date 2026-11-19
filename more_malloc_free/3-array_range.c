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
	size_t size, i;

	if (min > max)
		return (NULL);

	size = (size_t)((long long)max - min) + 1;

	if (size > SIZE_MAX / sizeof(int))
		return (NULL);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = (int)((long long)min + i);

	return (arr);
}
