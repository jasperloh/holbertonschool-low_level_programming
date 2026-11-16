/**
 * create an array of chars - initialized it with a specific char
 * @c: initialized char
 * @size: the size of the memory to print
 *
 * Return: array
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc((size * sizeof(char)));
	if (array == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
