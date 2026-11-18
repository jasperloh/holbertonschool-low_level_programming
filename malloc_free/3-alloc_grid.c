/**
 * alloc_grid - return a pointer to a 2d array of integers
 * @width: int
 * @height: int
 *
 * Return: array
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int **arr = (int**)malloc(width * sizeof(int*));
	int i;

	for (i = 0; i < width; i++)
	{
		arr[i] = (int*)calloc(height, sizeof(int));
	}
	return (arr);
}
