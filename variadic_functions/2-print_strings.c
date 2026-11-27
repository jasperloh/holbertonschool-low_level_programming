#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print string arguments followed by a newline
 * @separator: String to print between arguments, or NULL
 * @n: Number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(args);

	printf("\n");
}
