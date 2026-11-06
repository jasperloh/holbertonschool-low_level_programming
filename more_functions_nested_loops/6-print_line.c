#include "main.h"

/**
 * print_line - draws a straight line using underscores
 * @n: Number of underscores to print
 *
 * Description: Prints n underscores followed by a newline.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
