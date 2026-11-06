#include "main.h"

/**
 * print_diagonal - draws a diagonal line using backslashes
 * @n: Number of backslashes to print
 *
 * Description: Prints a diagonal line followed by a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
