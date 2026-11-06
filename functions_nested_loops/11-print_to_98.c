#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: The starting integer
 *
 * Description: Prints integers in ascending or descending
 * order, separated by a comma and space.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}

	printf("98\n");
}
