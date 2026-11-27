#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Add the integer arguments
 * @count: Number of integer arguments to add
 *
 * Return: Sum of the arguments, or 0 if count is zero
 */
int sum_them_all(int count, ...)
{
	int s = 0;
	int i;
	va_list args;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}

	va_end(args);
	return (s);
}
